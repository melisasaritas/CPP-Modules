/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:09:41 by msaritas          #+#    #+#             */
/*   Updated: 2024/07/23 15:11:12 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    this->N = 1;
}

Span::Span(unsigned int N)
{
    this->N = N;
}

Span::Span(const Span &copy)
{
    *this = copy;
}

Span &Span::operator=(const Span &copy)
{
    this->N = copy.N;
    this->span = copy.span;
    return (*this);
}

void Span::addNumber(unsigned int New)
{
    if (this->span.size() >= this->N)
        throw std::out_of_range("Cannot add more numbers. Maximum capacity reached.");
    this->span.push_back(New);
}

void    Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (begin > end)
        return ;
    while(begin != end)
    {
        if (this->span.size() >= this->N)
            throw std::out_of_range("Cannot add more numbers. Maximum capacity reached.");
        else
            this->span.push_back(*begin);
        begin++;
    }
}

int Span::shortestSpan()
{
    if (this->span.size() < 2)
        throw std::logic_error("Cannot find shortest span with less than two numbers");

    std::vector<int> sortedNumbers = this->span;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());

    int minSpan = sortedNumbers[1] - sortedNumbers[0];
    for (size_t i = 2; i < sortedNumbers.size(); ++i)
    {
        int currentSpan = sortedNumbers[i] - sortedNumbers[i - 1];
        if (currentSpan < minSpan)
            minSpan = currentSpan;
    }
    return minSpan;
}

int Span::longestSpan()
{
    if (this->span.size() < 2)
        throw std::logic_error("Cannot find longest span with less than two numbers");

    int minElement = *std::min_element(this->span.begin(), this->span.end());
    int maxElement = *std::max_element(this->span.begin(), this->span.end());

    return maxElement - minElement;
}

Span::~Span()
{
    
}

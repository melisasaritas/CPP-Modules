/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:09:48 by msaritas          #+#    #+#             */
/*   Updated: 2024/07/18 16:08:46 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span a(10200);
    srand(time(NULL));
    try{
        for(int i = 0; i < 10200; i++)
            a.addNumber(rand());
        std::cout << "**************" << std::endl;
        std::cout << a.longestSpan() << std::endl;
        std::cout << a.shortestSpan() << std::endl;
        std::cout << "**************" << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }

    Span b(5);
    std::vector<int> vc;
    for (int i = 0; i < 5; i++)
		vc.push_back(i * 5);
	try{
		b.addNumbers(vc.begin(), vc.end());
        std::cout << "**************" << std::endl;
        std::cout << b.longestSpan() << std::endl;
        std::cout << b.shortestSpan() << std::endl;
        std::cout << "**************" << std::endl;
    }
    catch(std::exception& e){
	    std::cout << e.what() << std::endl;
	}


    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    
}
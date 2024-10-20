/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 14:58:18 by msaritas          #+#    #+#             */
/*   Updated: 2024/07/27 19:59:02 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
    
}

RPN::RPN(const RPN &copy)
{
    *this = copy;
}

RPN &RPN::operator=(const RPN &copy)
{
    this->expression = copy.expression;
    return (*this);
}

void    RPN::fill_the_exp(std::string exp)
{
    for(unsigned long i = exp.size(); i <= exp.size(); i -= 2)
    {
        if (i <= 0)
            break ;
        try{
            int num = std::stoi(exp.substr(i - 1, 1));
            this->expression.push(num);
        }
        catch(std::exception &e){
            if (exp.substr(i - 1, 1) == "+")
                this->expression.push(PLUS);
            else if (exp.substr(i - 1, 1) == "-")
                this->expression.push(MINUS);
            else if (exp.substr(i - 1, 1) == "/")
                this->expression.push(DIVIDE);
            else if (exp.substr(i - 1, 1) == "*")
                this->expression.push(MULTIPLY);
            else
                this->expression.push(ERROR);
        }
    }

    if (exp.size() % 2 == 0)
        this->expression.push(ERROR);
}

void RPN::calculate()
{
    int result;
    int num1;
    int num2;
    int num3 = 10;
    int op;

    while (this->expression.size() > 1)
    {
        if (this->expression.top() == ERROR)
        {
            std::cout << "Error" << std::endl;
            return ;
        }
        num1 = this->expression.top();
        this->expression.pop();
        num2 = this->expression.top();
        this->expression.pop();
        if (this->expression.size() < 1 || (this->expression.top() < 10 && this->expression.size() == 1))
        {
            std::cout << "Error" << std::endl;
            return ;
        }
        if (this->expression.top() < 10)
        {
            num3 = this->expression.top();
            this->expression.pop();
        }
        op = this->expression.top();
        this->expression.pop();
        
        if (num3 == 10)
        {
            if (op == PLUS)
                result = num1 + num2;
            else if (op == MINUS)
                result = num1 - num2;
            else if (op == DIVIDE)
                result = num1 / num2;
            else if (op == MULTIPLY)
                result = num1 * num2;
            else
            {
                std::cout << "Error" << std::endl;
                return ;
            }
            this->expression.push(result);
        }
        else
        {
            if (op == PLUS)
                result = num2 + num3;
            else if (op == MINUS)
                result = num2 - num3;
            else if (op == DIVIDE)
                result = num2 / num3;
            else if (op == MULTIPLY)
                result = num2 * num3;
            else
            {
                std::cout << "Error" << std::endl;
                return ;
            }
            this->expression.push(result);
            this->expression.push(num1);
            num3 = 10;
        }
    }
    std::cout << this->expression.top() << std::endl;
}

RPN::~RPN()
{
    
}

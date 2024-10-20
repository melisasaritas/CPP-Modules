/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 16:45:39 by msaritas          #+#    #+#             */
/*   Updated: 2024/07/27 19:32:04 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        RPN New;
        New.fill_the_exp(argv[1]);
        New.calculate();
    }
    else
        std::cout << "Error" << std::endl;
}

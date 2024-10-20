/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:15:57 by msaritas          #+#    #+#             */
/*   Updated: 2024/07/09 19:42:59 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if (argc != 2) {
        std::cout << "Error: Wrong number of arguments" << std::endl;
        return (1);
    }
    std::string inputString = argv[1];
    ScalarConverter::convert(inputString);
    return (0);
}

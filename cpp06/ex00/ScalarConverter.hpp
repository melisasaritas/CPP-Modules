/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:24:59 by msaritas          #+#    #+#             */
/*   Updated: 2024/07/09 19:18:24 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <iomanip>
# include <limits>
#include <cstdlib>

#define CHAR 1
#define INT 2
#define FLOAT 3
#define FLOAT_S 4
#define DOUBLE 5
#define DOUBLE_F 6


class ScalarConverter{
    private:
        ScalarConverter();
        ScalarConverter(ScalarConverter const &New);
        ScalarConverter &operator=(ScalarConverter const &New);
        ~ScalarConverter();
    public:
        static void    convert(std::string literal);
};

int findType(std::string literal);
void    impossible();


#endif
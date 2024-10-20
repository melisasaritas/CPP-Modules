/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:16:16 by msaritas          #+#    #+#             */
/*   Updated: 2024/07/09 19:08:42 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}
ScalarConverter::ScalarConverter(ScalarConverter const &New)
{
    (void)New;
}
ScalarConverter &ScalarConverter::operator=(ScalarConverter const &New)
{
    (void)New;
    return *this;
}

void    fromChar(std::string literal)
{
    char Char = literal.c_str()[0];
    std::cout << "char: '" << Char << "'"<< std::endl;
    int Int = static_cast<int>(Char);
    std::cout << "int: " << Int << std::endl;
    float Float = static_cast<float>(Char);
    std::cout << "float: " << std::fixed << std::setprecision(1) << Float << std::endl;
    double Double = static_cast<double>(Char);
    std::cout << "double: " << std::fixed << std::setprecision(1) << Double << std::endl;
}

void    impossible()
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: impossible" << std::endl;
    std::cout << "double: impossible" << std::endl;
}

void    fromFloat(std::string literal)
{
    size_t n = literal.size() - literal.find('.') - 2;
    literal.erase(literal.end() - 1);
    float Float = std::strtof(literal.c_str(), NULL);
    
    if (Float > std::numeric_limits<char>::max() || Float < std::numeric_limits<char>::min())
        std::cout << "char: impossible" << std::endl;

    else {
        char Char = static_cast<char>(Float);
        if (!std::isprint(Char))
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: '" << Char << "'" << std::endl;
    }

    if (Float > std::numeric_limits<int>::max() || Float < std::numeric_limits<int>::min())
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(Float) << std::endl;

    if (Float > std::numeric_limits<float>::max() || Float < -std::numeric_limits<float>::max())
        std::cout << "float: impossible" << std::endl;
    else
        std::cout << "float: " << std::fixed << std::setprecision(n) << Float << "f" << std::endl;

    if (Float > std::numeric_limits<double>::max() || Float < -std::numeric_limits<double>::max())
        std::cout << "double: impossible" << std::endl;
    else
        std::cout << "double: " << std::fixed << std::setprecision(n) << static_cast<double>(Float) << std::endl;
}

void fromDouble(std::string literal) {
    size_t n = literal.size() - literal.find('.') - 1;

    double Double = std::strtod(literal.c_str(), nullptr);

    if (Double > std::numeric_limits<char>::max() || Double < std::numeric_limits<char>::min())
        std::cout << "char: impossible" << std::endl;
    else {
        char Char = static_cast<char>(Double);
        if (!std::isprint(Char))
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: '" << Char << "'" << std::endl;
    }

    if (Double > std::numeric_limits<int>::max() || Double < std::numeric_limits<int>::min())
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(Double) << std::endl;

    if (Double > std::numeric_limits<float>::max() || Double < -std::numeric_limits<float>::max())
        std::cout << "float: impossible" << std::endl;
    else
        std::cout << "float: " << std::fixed << std::setprecision(n) << static_cast<float>(Double) << "f" << std::endl;

    if (Double > std::numeric_limits<double>::max() || Double < -std::numeric_limits<double>::max())
        std::cout << "double: impossible" << std::endl;
    else
        std::cout << "double: " << std::fixed << std::setprecision(n) << Double << std::endl;
}

void    fromFloat_S(std::string literal)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    float Float = std::strtof(literal.c_str(), NULL);
    std::cout << "float: " << Float << "f" << std::endl;
    double Double = std::strtod(literal.c_str(), NULL);
    std::cout << "double: " << Double << std::endl;
}

void    fromDouble_F(std::string literal)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    float Float = std::strtof(literal.c_str(), NULL);
    std::cout << "float: " << Float << "f" << std::endl;
    double Double = std::strtod(literal.c_str(), NULL);
    std::cout << "double: " << Double << std::endl;
}

void    fromInt(std::string literal)
{
    int impossible = 0;
    
    int Int = 0;
    try{
        Int = std::stoi(literal.c_str());
        impossible = 0;     
    }
    catch(const std::exception &e)
    {
        impossible = 1;
    }
    
    if (Int > std::numeric_limits<char>::max() || Int < std::numeric_limits<char>::min() || impossible)
        std::cout << "char: impossible" << std::endl;
    else {
        char Char = static_cast<char>(Int);
        if (!std::isprint(Char))
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: '" << Char << "'" << std::endl;
    }

    if (impossible)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << Int << std::endl;

    if (Int > std::numeric_limits<float>::max() || Int < -std::numeric_limits<float>::max() || impossible)
        std::cout << "float: impossible" << std::endl;
    else
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(Int) << "f" << std::endl;

    if (Int > std::numeric_limits<double>::max() || Int < -std::numeric_limits<double>::max() || impossible)
        std::cout << "double: impossible" << std::endl;
    else
        std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(Int) << std::endl;

}

void    ScalarConverter::convert(std::string literal)
{
    if (findType(literal) == CHAR)
    {
        fromChar(literal);
    }
    if (findType(literal) == FLOAT)
    {
        fromFloat(literal);
    }
    if (findType(literal) == DOUBLE)
    {
        fromDouble(literal);
    }
    if (findType(literal) == FLOAT_S)
    {
        fromFloat_S(literal);
    }
    if (findType(literal) == DOUBLE_F)
    {
        fromDouble_F(literal);
    }
    if (findType(literal) == INT)
    {
        fromInt(literal);
    }
}

int findType(std::string literal)
{
    //Except for char parameters, only the decimal notation will be used.
    if (literal.length() == 1 && std::isalpha(literal.c_str()[0]) && std::isprint(literal.c_str()[0]))
        return CHAR;
    else if (!literal.compare("inff") || !literal.compare("-inff") || !literal.compare("nanf"))
        return FLOAT_S;
    else if (!literal.compare("inf") || !literal.compare("-inf") || !literal.compare("nan"))
        return DOUBLE_F;
    else if (literal.find('.') != literal.npos && literal[literal.size() - 1] == 'f' && literal[literal.size() - 2] != '.')
        return FLOAT;
    else if (literal.find('.') != literal.npos)
        return DOUBLE;
    return INT;
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "Destructor is called" << std::endl;
}

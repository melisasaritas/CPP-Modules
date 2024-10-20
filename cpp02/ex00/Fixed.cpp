/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:56:15 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/14 16:08:07 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    this->FixedPoint = 0;
}

Fixed::Fixed(const Fixed &New){
    std::cout << "Copy constructor called" << std::endl;
    *this = New;
}

void    Fixed::operator=(const Fixed &New){
    std::cout << "Copy assignment operator called" << std::endl;
    this->FixedPoint = New.getRawBits();
}

int Fixed::getRawBits( void ) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->FixedPoint);
}

void Fixed::setRawBits( int const raw ){
    std::cout << "setRawBits member function called" << std::endl;
    this->FixedPoint = raw;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:57:00 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/15 14:36:33 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    this->FixedPoint = 0;
}

Fixed::Fixed(int const New){
    std::cout << "Int constructor called" << std::endl;
    this->FixedPoint = New << this->bits;
}

Fixed::Fixed(float const New){
    std::cout << "Float constructor called" << std::endl;
    this->FixedPoint = roundf(New * (1 << this->bits));
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
    return (this->FixedPoint);
}

void Fixed::setRawBits( int const raw ){
    std::cout << "setRawBits member function called" << std::endl;
    this->FixedPoint = raw;
}

float Fixed::toFloat( void ) const{
    return (static_cast<float> (this->FixedPoint) / (1 << this->bits));
}

int Fixed::toInt( void ) const{
    return (this->FixedPoint >> this->bits);
}

std::ostream    &operator<<(std::ostream &stream, Fixed const &Float){
    stream << Float.toFloat();
    return stream;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}


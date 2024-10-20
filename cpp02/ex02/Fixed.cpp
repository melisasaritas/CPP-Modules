/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:57:00 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/14 19:18:51 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    this->FixedPoint = 0;
}

Fixed::Fixed(int const New){
    this->FixedPoint = New << this->bits;
}

Fixed::Fixed(float const New){
    this->FixedPoint = roundf(New * (1 << this->bits));
}

Fixed::Fixed(const Fixed &New){
    *this = New;
}

void    Fixed::operator=(const Fixed &New){
    this->FixedPoint = New.getRawBits();
}

bool    Fixed::operator>(const Fixed &New){
    return (this->getRawBits() > New.getRawBits());
}

bool    Fixed::operator<(const Fixed &New){
    return (this->getRawBits() < New.getRawBits());
}

bool    Fixed::operator>=(const Fixed &New){
    return (this->getRawBits() >= New.getRawBits());
}

bool    Fixed::operator<=(const Fixed &New){
    return (this->getRawBits() <= New.getRawBits());
}

bool    Fixed::operator==(const Fixed &New){
    return (this->getRawBits() == New.getRawBits());
}

bool    Fixed::operator!=(const Fixed &New){
    return (this->getRawBits() != New.getRawBits());
}

Fixed    Fixed::operator+(const Fixed &New){
    return (Fixed(this->toFloat() + New.toFloat()));
}

Fixed    Fixed::operator-(const Fixed &New){
    return (Fixed(this->toFloat() - New.toFloat()));
}

Fixed    Fixed::operator*(const Fixed &New){
    return (Fixed(this->toFloat() * New.toFloat()));
}

Fixed    Fixed::operator/(const Fixed &New){
    return (Fixed(this->toFloat() / New.toFloat()));
}

Fixed    &Fixed::operator++(void){
    ++this->FixedPoint;
    return (*this);
}

Fixed    Fixed::operator++(int){
    Fixed tmp = Fixed();
    tmp.setRawBits(this->FixedPoint++);
    return (tmp);
}

Fixed    &Fixed::operator--(void){
    --this->FixedPoint;
    return (*this);
}

Fixed    Fixed::operator--(int){
    Fixed tmp = Fixed();
    tmp.setRawBits(this->FixedPoint--);
    return (tmp);
}

int Fixed::getRawBits( void ) const{
    return (this->FixedPoint);
}

void Fixed::setRawBits( int const raw ){
    this->FixedPoint = raw;
}

float Fixed::toFloat( void ) const{
    return (static_cast<float> (this->FixedPoint) / (1 << this->bits));
}

int Fixed::toInt( void ) const{
    return (this->FixedPoint >> this->bits);
}

Fixed &Fixed::min(Fixed &FP1, Fixed &FP2){
    if (FP1.getRawBits() < FP2.getRawBits())
        return (FP1);
    return (FP2);
}

Fixed const &Fixed::min(Fixed const &FP1, Fixed const &FP2){
    if (FP1.getRawBits() < FP2.getRawBits())
        return (FP1);
    return (FP2);
}

Fixed &Fixed::max(Fixed &FP1, Fixed &FP2){
    if (FP1.getRawBits() > FP2.getRawBits())
        return (FP1);
    return (FP2);
}

Fixed const &Fixed::max(Fixed const &FP1, Fixed const &FP2){
    if (FP1.getRawBits() > FP2.getRawBits())
        return (FP1);
    return (FP2);
}

std::ostream    &operator<<(std::ostream &stream, Fixed const &Float){
    stream << Float.toFloat();
    return stream;
}

Fixed::~Fixed(){
}

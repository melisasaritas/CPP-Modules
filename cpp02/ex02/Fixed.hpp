/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:58:13 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/15 14:40:55 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed{
    private:
        int FixedPoint;
        static int const bits = 8;
    public:
        Fixed();
        Fixed(const int New);
        Fixed(const float New);
        Fixed(const Fixed &New);
        void    operator=(const Fixed &New);
        bool    operator>(const Fixed &New);
        bool    operator<(const Fixed &New);
        bool    operator>=(const Fixed &New);
        bool    operator<=(const Fixed &New);
        bool    operator==(const Fixed &New);
        bool    operator!=(const Fixed &New);
        Fixed   operator+(const Fixed &New);
        Fixed   operator-(const Fixed &New);
        Fixed   operator*(const Fixed &New);
        Fixed   operator/(const Fixed &New);
        Fixed   &operator++(void);
        Fixed   operator++(int);
        Fixed   &operator--(void);
        Fixed   operator--(int);
        static Fixed        &min(Fixed &FP1, Fixed &FP2);
        static Fixed const  &min(Fixed const &FP1, Fixed const &FP2);
        static Fixed        &max(Fixed &FP1, Fixed &FP2);
        static Fixed const  &max(Fixed const &FP1, Fixed const &FP2);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        ~Fixed();
};
    
std::ostream    &operator<<(std::ostream &stream, Fixed const &Float);

#endif
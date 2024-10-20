/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:56:03 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/14 16:07:47 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed{
    private:
        int FixedPoint;
        static int const bits = 8;
    public:
        Fixed();
        Fixed(const Fixed &New);
        void    operator=(const Fixed &New);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        ~Fixed();
};

#endif

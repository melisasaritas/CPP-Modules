/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 15:56:13 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/18 16:50:34 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal{
    public:
        Dog();
        Dog(const Dog &New);
        void        operator=(const Dog &New);
        void        makeSound() const;
        ~Dog();
};

#endif
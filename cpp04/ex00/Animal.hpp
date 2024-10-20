/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 15:53:48 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/18 16:50:26 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal &New);
        void            operator=(const Animal &New);
        virtual void    makeSound(void) const;
        std::string     getType() const;
        ~Animal();
};

#endif
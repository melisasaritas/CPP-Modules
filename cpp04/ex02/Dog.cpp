/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:22:16 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/18 15:49:55 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(){
    std::cout << "Default constructor of Dog called" << std::endl;
    this->brain = new Brain();
    this->type = "Dog";
}

Dog::Dog(const Dog &New) : Animal(New){
    std::cout << "Copy constructor of Dog called" <<std::endl;
    *this = New;
}

void    Dog::operator=(const Dog &New){
    std::cout << "Copy assignment operator of Dog called" << std::endl;
    this->brain = new Brain(*(New.brain));
    this->type = New.type;
}

void    Dog::makeSound() const{
    std::cout << "Bark" << std::endl;
}

Dog::~Dog(){
    std::cout << "Destructor of Dog called" << std::endl;
    delete this->brain;
}
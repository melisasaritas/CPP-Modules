/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:32:52 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/18 15:03:23 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(){
    std::cout << "Default constructor of Cat called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &New) : Animal(New){
    std::cout << "Copy constructor of Cat called" <<std::endl;
    *this = New;
}

void    Cat::operator=(const Cat &New){
    std::cout << "Copy assignment operator of Cat called" << std::endl;
    this->type = New.type;
}

void    Cat::makeSound() const{
    std::cout << "Meow" << std::endl;
}

Cat::~Cat(){
    std::cout << "Destructor of Cat called" << std::endl;
}
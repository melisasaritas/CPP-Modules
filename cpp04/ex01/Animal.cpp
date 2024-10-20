/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 15:47:11 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/17 19:29:49 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Default constructor of Animal called" << std::endl;
    this->type = "";
}

Animal::Animal(Animal const &New){
    std::cout << "Copy constructor of Animal called" <<std::endl;
    *this = New;
}

void    Animal::operator=(Animal const &New){
    std::cout << "Copy assignment operator of Animal called" << std::endl;
    this->type = New.type;
}

void    Animal::makeSound() const{
    
}

std::string Animal::getType() const{
    return (this->type);
}

Animal::~Animal(){
    std::cout << "Destructor of Animal called" << std::endl;
}
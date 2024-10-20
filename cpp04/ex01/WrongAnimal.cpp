/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 19:32:38 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/17 20:13:57 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "Default constructor of WrongAnimal called" << std::endl;
    this->type = "";
}

WrongAnimal::WrongAnimal(WrongAnimal const &New){
    std::cout << "Copy constructor of WrongAnimal called" <<std::endl;
    *this = New;
}

void    WrongAnimal::operator=(WrongAnimal const &New){
    std::cout << "Copy assignment operator of WrongAnimal called" << std::endl;
    this->type = New.type;
}

void    WrongAnimal::makeSound() const{
    std::cout << "bark bark" << std::endl;
}

std::string WrongAnimal::getType() const{
    return (this->type);
}

WrongAnimal::~WrongAnimal(){
    std::cout << "Destructor of WrongAnimal called" << std::endl;
}
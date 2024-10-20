/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 19:32:44 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/17 20:12:46 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << "Default constructor of WrongCat called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &New){
    std::cout << "Copy constructor of WrongCat called" <<std::endl;
    *this = New;
}

void    WrongCat::operator=(const WrongCat &New){
    std::cout << "Copy assignment operator of WrongCat called" << std::endl;
    this->type = New.type;
}

void    WrongCat::makeSound() const{
    std::cout << "Meow" << std::endl;
}

WrongCat::~WrongCat(){
    std::cout << "Destructor of WrongCat called" << std::endl;
}
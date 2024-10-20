/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:43:43 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/17 15:37:07 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
    std::cout << "Default constructor of FragTrap called" << std::endl;
    this->Name = "";
    this->HitPoint = 100;
    this->EnergyPoint = 100;
    this->AttackDamage = 30;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name){
    std::cout << "String constructor of FragTrap called" <<std::endl;
    this->Name = Name;
    this->HitPoint = 100;
    this->EnergyPoint = 100;
    this->AttackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &New){
    std::cout << "Copy constructor of FragTrap called" <<std::endl;
    *this = New;
}

void    FragTrap::operator=(const FragTrap &New){
    std::cout << "Copy assignment operator of FragTrap called" << std::endl;
    this->Name = New.Name;
    this->HitPoint = New.HitPoint;
    this->EnergyPoint = New.EnergyPoint;
    this->AttackDamage = New.AttackDamage;
}

void    FragTrap::attack(const std::string& target){
    if (this->EnergyPoint && this->HitPoint > 0)
    {
        std::cout << "FragTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" <<std::endl;
        this->EnergyPoint--;
    }
    else
        std::cout << "You have no energy or hit point! (FragTrap)" <<std::endl;
}

void FragTrap::highFivesGuys(){
    std::cout << "Give me a high five!" <<std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "Destructor of FragTrap called" <<std::endl;
}


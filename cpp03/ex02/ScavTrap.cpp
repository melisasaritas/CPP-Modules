/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:27:30 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/17 15:37:20 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
    std::cout << "Default constructor of ScavTrap called" << std::endl;
    this->Name = "";
    this->HitPoint = 100;
    this->EnergyPoint = 50;
    this->AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name){
    std::cout << "String constructor of ScavTrap called" <<std::endl;
    this->Name = Name;
    this->HitPoint = 100;
    this->EnergyPoint = 50;
    this->AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &New){
    std::cout << "Copy constructor of ScavTrap called" <<std::endl;
    *this = New;
}

void    ScavTrap::operator=(const ScavTrap &New){
    std::cout << "Copy assignment operator of ScavTrap called" << std::endl;
    this->Name = New.Name;
    this->HitPoint = New.HitPoint;
    this->EnergyPoint = New.EnergyPoint;
    this->AttackDamage = New.AttackDamage;
}

void    ScavTrap::attack(const std::string& target){
    if (this->EnergyPoint && this->HitPoint > 0)
    {
        std::cout << "Scavtrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" <<std::endl;
        this->EnergyPoint--;
    }
    else
        std::cout << "You have no energy or hit point! (ScavTrap)" <<std::endl;
}

void ScavTrap::guardGate(){
    std::cout << "Scavtrap " << this->Name << " is now in Gate keeper mode." <<std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "Destructor of ScavTrap called" <<std::endl;
}


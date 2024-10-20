/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:38:01 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/17 15:36:55 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    std::cout << "Default constructor of ClapTrap called" <<std::endl;
    this->Name = "";
    this->HitPoint = 10;
    this->EnergyPoint = 10;
    this->AttackDamage = 0;
}

ClapTrap::ClapTrap(std::string Name){
    std::cout << "String constructor of ClapTrap called" <<std::endl;
    this->Name = Name;
    this->HitPoint = 10;
    this->EnergyPoint = 10;
    this->AttackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &New){
    std::cout << "Copy constructor of ClapTrap called" <<std::endl;
    *this = New;
}

void    ClapTrap::operator=(const ClapTrap &New){
    std::cout << "Copy assignment operator of ClapTrap called" << std::endl;
    this->Name = New.Name;
    this->HitPoint = New.HitPoint;
    this->EnergyPoint = New.EnergyPoint;
    this->AttackDamage = New.AttackDamage;
}

void   ClapTrap::attack(const std::string& target){
    if (this->EnergyPoint && this->HitPoint > 0)
    {
        std::cout << "Claptrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" <<std::endl;
        this->EnergyPoint--;
    }
    else
        std::cout << "You have no energy or hit point! (ClapTrap)" <<std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount){
    std::cout << "Claptrap " << this->Name << " is being damaged, by " << amount << " points!" <<std::endl;
    this->HitPoint -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount){
    if (this->EnergyPoint && this->HitPoint > 0)
    {
        std::cout << "Claptrap " << this->Name << " repairs itselfs, getting " << amount << " points of hit points back!" <<std::endl;
        this->HitPoint += amount;
        this->EnergyPoint--;
    }
    else
        std::cout << "You have no energy or hit point!" <<std::endl;
}

ClapTrap::~ClapTrap(){
    std::cout << "Destructor of ClapTrap called" <<std::endl;
}
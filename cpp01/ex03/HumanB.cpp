/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:54:41 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/11 14:40:22 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;
}

HumanB::~HumanB(void)
{
    std::cout << this->name << " has been destroyed" << std::endl;
}

void    HumanB::setWeapon(Weapon weapon)
{
    this->weapon = &weapon;
}

void    HumanB::attack(void)
{
    if (this->weapon)
        std::cout << this->name << " attacks with their " << this->weapon->getType() <<std::endl;
    else
        std::cout << this->name << " attacks with their NULL" << std::endl;
}

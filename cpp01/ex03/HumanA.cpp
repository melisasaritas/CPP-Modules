/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:54:38 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/11 14:20:03 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): weapon(weapon)
{
    this->name = name;
}
HumanA::~HumanA(void)
{
    std::cout << this->name << " has been destroyed" << std::endl;
}
void    HumanA::attack(void)
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() <<std::endl;
}

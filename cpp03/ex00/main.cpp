/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:04:10 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/17 15:29:59 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap First = ClapTrap("Melisa");
    ClapTrap Second = ClapTrap("Yusuf");
    ClapTrap tmp;

    tmp = First;

    First.attack("gun");
    Second.takeDamage(0);

    Second.attack("knife");
    First.takeDamage(0);
    
    tmp.beRepaired(0);

    First.attack("gun");
    Second.takeDamage(0);
    First.attack("gun");
    Second.takeDamage(0);
    First.attack("gun");
    Second.takeDamage(0);
    First.attack("gun");
    Second.takeDamage(0);
    First.attack("gun");
    Second.takeDamage(0);
    First.attack("gun");
    Second.takeDamage(0);
    First.attack("gun");
    Second.takeDamage(0);
    First.attack("gun");
    Second.takeDamage(0);
    First.attack("gun");
    Second.takeDamage(0);
    First.attack("gun");
}
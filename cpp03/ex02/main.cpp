/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:04:10 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/17 15:43:06 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap First = ClapTrap("Melisa");
    ClapTrap Second = ClapTrap("Yusuf");
    ScavTrap Third = ScavTrap("Yusuf");
    FragTrap Fourth = FragTrap("Melisa");
    ClapTrap tmp;
    ScavTrap tmp2;
    FragTrap tmp3;

    tmp = First;
    tmp2 = Third;
    tmp3 = Fourth;

    First.attack("Yusuf");
    Second.takeDamage(0);

    std::cout << "--------------------" << std::endl;

    Second.attack("Melisa");
    First.takeDamage(0);

    std::cout << "--------------------" << std::endl;

    Third.attack("Melisa");
    First.takeDamage(20);

    std::cout << "--------------------" << std::endl;
    
    Second.beRepaired(0);
    tmp.beRepaired(0);

    std::cout << "--------------------" << std::endl;

    First.beRepaired(20);
    tmp2.attack("Yusuf");
    Second.takeDamage(20);

    std::cout << "--------------------" << std::endl;

    Third.guardGate();
    Third.attack("Yusuf");
    Second.takeDamage(20);
    Third.attack("Yusuf");
    Second.takeDamage(20);
    Third.attack("Yusuf");
    Second.takeDamage(20);
    
    std::cout << "--------------------" << std::endl;

    Second.attack("Melisa");
    Fourth.attack("knife");
    First.takeDamage(30);

    std::cout << "--------------------" << std::endl;

    tmp3.highFivesGuys();
}
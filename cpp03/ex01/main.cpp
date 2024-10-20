/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:04:10 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/17 15:40:29 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ClapTrap First = ClapTrap("Melisa");
    ClapTrap Second = ClapTrap("Yusuf");
    ScavTrap Third = ScavTrap("Yusuf");
    ClapTrap tmp;
    ScavTrap tmp2;

    tmp = First;
    tmp2 = Third;

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
}
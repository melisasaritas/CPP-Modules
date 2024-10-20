/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:40:12 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/11 16:40:12 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        Harl harl;
        std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
        
        int level = -1;
        while(++level < 4)
        {
            if (!levels[level].compare(av[1]))
                break;
        }
        switch(level)
        {
            case 0:
                harl.complain("DEBUG");
            case 1:
                harl.complain("INFO");
            case 2:
                harl.complain("WARNING");
            case 3:
                harl.complain("ERROR");
                break;
            default:
                std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        }
    }
    else
        std::cout << "Error: Correct input is ./harlFilter <string>" <<std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:11:54 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/06 15:05:57 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i;
    int j;

    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<std::endl;
    else
    {
        i = 0;
        while(++i < ac)
        {
            j = -1;
            while(av[i][++j])
                std::cout << (char)(std::toupper(av[i][j]));
            if (i != ac - 1)
                std::cout << " ";
        }
        std::cout << std::endl;
    }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 20:00:30 by msaritas          #+#    #+#             */
/*   Updated: 2024/08/02 15:29:13 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "Error: give element/s" << std::endl;
    else
    {
        std::vector<int> cont_vec;
        std::list<int> cont_lis;

        if (!fill_the_containers(av, ac, cont_vec))
            return (0);
        fill_the_containers(av, ac, cont_lis);
        std::cout << "Before: ";
        for(unsigned long i = 0; i < cont_vec.size(); i++)
            std::cout << cont_vec[i] << " ";
        std::cout << std::endl;
        PmergeMe a;
        a.sort_with_l(cont_lis);
        a.sort_with_v(cont_vec);
        
        std::cout << "After: ";
        std::list<int>::iterator it;
        for(it = cont_lis.begin(); it != cont_lis.end(); it++)
            std::cout << *it << " ";
        std::cout << std::endl;
        std::cout << "Time to process a range of " << cont_lis.size() << " elements with std::list<int> : "<< std::fixed << std::setprecision(6) << a.get_time_l() << " us" << std::endl;
        std::cout << "Time to process a range of " << cont_vec.size() << " elements with std::vector<int> : "<< std::fixed << std::setprecision(6) << a.get_time_v() << " us" << std::endl;
    }
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:10:56 by msaritas          #+#    #+#             */
/*   Updated: 2024/07/17 15:08:53 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main()
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(5);
    vec.push_back(3);
    vec.push_back(7);
    vec.push_back(1);
    vec.push_back(6);
    vec.push_back(9);
    vec.push_back(0);
    vec.push_back(5);
    
    try{
        std::vector<int>::iterator it = easyfind(vec, 1);
        std::cout << std::distance(vec.begin(), it) << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }

    try{
        std::vector<int>::iterator it = easyfind(vec, 4);
        std::cout << std::distance(vec.begin(), it) << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }

}
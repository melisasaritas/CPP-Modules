/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 14:37:53 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/18 14:55:35 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Default constructor of Brain called" << std::endl;
    for (int i = 0; i < 100 ; i++)
        this->ideas[i] = "";
}

Brain::Brain(Brain const &New){
    std::cout << "Copy constructor of Brain called" <<std::endl;
    *this = New;
}

void    Brain::operator=(Brain const &New){
    std::cout << "Copy assignment operator of Brain called" << std::endl;
    for (int i = 0; i < 100 ; i++)
        this->ideas[i] = New.ideas[i];
}

Brain::~Brain(){
    std::cout << "Destructor of Brain called" << std::endl;
}
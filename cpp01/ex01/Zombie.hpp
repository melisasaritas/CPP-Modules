/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:06:06 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/08 15:15:58 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie{
    private:
        std::string name;
    public:
        Zombie(void);
        ~Zombie(void);
        void    announce(void);
        void    SetName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif
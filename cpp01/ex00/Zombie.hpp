/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:31:31 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/08 13:58:46 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie{
    private:
        std::string name;
    public:
        Zombie(std::string name);
        ~Zombie(void);
        void    announce(void);
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif
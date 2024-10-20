/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:43:56 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/15 19:47:36 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap{
    public:
        FragTrap();
        FragTrap(std::string Name);
        FragTrap(const FragTrap &New);
        void    operator=(const FragTrap &New);
        void    attack(const std::string& target);
        void    highFivesGuys(void);
        ~FragTrap();

};

#endif
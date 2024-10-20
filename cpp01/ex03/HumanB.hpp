/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:54:12 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/11 14:39:10 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB{
    private:
        std::string name;
        Weapon      *weapon;
    public:
        HumanB(std::string name);
        ~HumanB(void);
        void    setWeapon(Weapon weapon);
        void    attack(void);
};

#endif
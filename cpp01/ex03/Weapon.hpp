/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:49:29 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/08 17:52:16 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon{
    private:
        std::string type;
    public:
        Weapon(std::string type);
        ~Weapon(void);
        std::string const   &getType();
        void                setType(std::string type);
};

#endif
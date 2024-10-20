/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 14:37:50 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/18 14:50:59 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include "Animal.hpp"

class Brain{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain &New);
        void        operator=(const Brain &New);
        ~Brain();
};

#endif
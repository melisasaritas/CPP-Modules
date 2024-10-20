/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 15:56:10 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/18 14:51:49 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Brain.hpp"

class Cat : public Animal{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(const Cat &New);
        void        operator=(const Cat &New);
        void        makeSound() const;
        ~Cat();
};

#endif
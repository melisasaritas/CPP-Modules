/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:44:39 by msaritas          #+#    #+#             */
/*   Updated: 2024/07/23 15:13:40 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <algorithm>
# include <iostream>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
    public:
        MutantStack()
        {
            
        }
        
        MutantStack(const MutantStack &copy)
        {
            *this = copy;
        }
        
        MutantStack &operator=(const MutantStack &copy)
        {
            this->c = copy.c;
            return (*this);
        }
    
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() {
            return std::stack<T>::c.begin();
        }
        iterator end() {
            return std::stack<T>::c.end();
        }

        ~MutantStack()
        {
            
        }
};

#endif

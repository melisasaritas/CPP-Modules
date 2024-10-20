/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 14:39:04 by msaritas          #+#    #+#             */
/*   Updated: 2024/07/03 17:28:00 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template <typename T>
void iter(T *array, size_t len, void func(T elem))
{
    for (size_t i = 0; i < len; i++)
    {
        func(array[i]);
    }
}

template <typename T>
void func(T elem)
{
    std::cout << elem << std::endl;
}

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:10:53 by msaritas          #+#    #+#             */
/*   Updated: 2024/07/17 18:00:12 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>
# include <iostream>

template<typename T>
typename T::iterator easyfind(T &container, int ifexist)
{
    typename T::iterator it = std::find(container.begin(), container.end(), ifexist);

    if (it == container.end())
        throw std::out_of_range("No occurrence is found");
    else
        return it;
}

#endif
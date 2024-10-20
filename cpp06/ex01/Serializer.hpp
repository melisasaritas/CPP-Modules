/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:08:13 by msaritas          #+#    #+#             */
/*   Updated: 2024/07/09 19:43:27 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
# include <cstdint>
# include <iostream>


struct Data{
    int id;
    double val;
};

class Serializer{
    private:
        Serializer();
        Serializer(Serializer const &New);
        Serializer &operator=(Serializer const &New);
        ~Serializer();
    public:
        static Data* deserialize(uintptr_t raw);
        static uintptr_t serialize(Data* ptr);
};

#endif
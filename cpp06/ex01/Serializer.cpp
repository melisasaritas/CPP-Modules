/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:08:09 by msaritas          #+#    #+#             */
/*   Updated: 2024/07/09 19:33:29 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
}
Serializer::Serializer(Serializer const &New)
{
    (void)New;
}
Serializer &Serializer::operator=(Serializer const &New)
{
    (void)New;
    return *this;
}

uintptr_t Serializer::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}
Data* Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}

Serializer::~Serializer()
{
    std::cout << "Destructor is called" << std::endl;
}

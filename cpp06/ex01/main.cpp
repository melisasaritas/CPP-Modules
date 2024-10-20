/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:25:56 by msaritas          #+#    #+#             */
/*   Updated: 2024/07/09 19:45:48 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data *data = new Data;
	data->val = 1.12;
	std::cout <<"Data adress: "<<data<<std::endl;
	std::cout<<"Value of val: "<<data->val<<std::endl;
	uintptr_t i = Serializer::serialize(data);
	Data *d = Serializer::deserialize(i);
	if(d == data)
		std::cout<<"They're equal\n";
	std::cout <<"d -> "<< d <<std::endl;
	std::cout<<"i -> "<< i <<std::endl;

	delete data;
	return 0;
}

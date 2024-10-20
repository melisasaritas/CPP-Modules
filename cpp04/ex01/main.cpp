/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 15:47:15 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/18 16:30:53 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *(a[6]);

    for (int i = 0; i < 3 ; i++)
        a[i] = new Dog();
    for (int i = 3; i < 6 ; i++)
        a[i] = new Cat();
    for (int i = 0; i < 6 ; i++)
        delete a[i];
    std::cout << "---------------" << std::endl;
    Dog k;
    Dog m = k;
    std::cout << m.getType() << std::endl;
    return 0;
}
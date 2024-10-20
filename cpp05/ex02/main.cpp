/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:46:18 by msaritas          #+#    #+#             */
/*   Updated: 2024/04/22 15:36:16 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void fun(){
	try
	{
		Bureaucrat human("oliver", 1);
		ShrubberyCreationForm myTree("melisa");
		RobotomyRequestForm robotomy("tommy");
		PresidentialPardonForm pardon("nice dog");
		std::cout << human << std::endl;

		std::cout << robotomy << std::endl;
		std::cout << myTree << std::endl;
		std::cout << pardon << std::endl;

		human.signForm(myTree);
		human.signForm(robotomy);

		myTree.execute(human);
		robotomy.execute(human);
		
		pardon.execute(human);
		human.signForm(pardon);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}	
}

int main(void)
{
	fun();
	//system("leaks Bureaucrat");
	return (0);
}
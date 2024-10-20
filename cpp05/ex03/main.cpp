/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:46:18 by msaritas          #+#    #+#             */
/*   Updated: 2024/04/22 15:39:38 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"

void fun()
{
	Intern		bob;
	Form		*form;
	Bureaucrat	karen("Karen", 50);

	// Test how all forms are created properly except for the last one
	try
	{
		form = bob.makeForm("robotomy request", "Alice");
		delete form;
		form = bob.makeForm("shrubbery creation", "Charlie");
		delete form;
		form = bob.makeForm("presidential pardon", "David");
		delete form;
		form = bob.makeForm("random request", "Elisa");
		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << "Caught exception: " << e.what() << std::endl;
	}

	// Test some Actions with available form
	std::cout << "------------------------------------" << std::endl;
	form = bob.makeForm("shrubbery creation", "Fred");
	form->beSigned(karen);
	karen.executeForm(*form);
	std::cout << "------------------------------------" << std::endl;
	delete form;
	form = bob.makeForm("presidential pardon", "Georgia");
	karen.signForm(*form);
	karen.executeForm(*form);
	delete form;
}

int main(void)
{
	fun();
	//system("leaks Bureaucrat");
	return (0);
}
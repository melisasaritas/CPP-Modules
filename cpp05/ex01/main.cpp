/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:46:18 by msaritas          #+#    #+#             */
/*   Updated: 2024/04/22 14:42:37 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

void	fun()
{
	Bureaucrat	burro("burro", 42);
	Bureaucrat	burri("burri", 4);
	std::cout << burro;
	std::cout << burri;

	try {
		Form	formaccio("formaccio", 1000, 1);
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	try {
		Form	formaccio("formaccio", 42, 0);
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	Form	formino("formino", 42, 42);
	Form	formone("formone", 1, 1);

	std::cout << std::endl << formino << formone;

	burro.signForm(formone);
	std::cout << formone;
	burri.signForm(formino);
	std::cout << formino;	
}

int	main() {
	fun();
	//system("leaks Bureaucrat");
}

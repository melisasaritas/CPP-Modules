/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:46:18 by msaritas          #+#    #+#             */
/*   Updated: 2024/04/22 14:28:23 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main() {

	try {
		Bureaucrat	pippo("pippo", 1);
		std::cout << pippo;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	try {
		Bureaucrat	poppi("poppi", -42);
		std::cout << poppi;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}


	try {
		Bureaucrat	poppi("poppi", 4242);
		std::cout << poppi;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	try {
		Bureaucrat	pippo("pippo", 3);
		std::cout << pippo;
		pippo.incrementGrade();
		std::cout << pippo;
		pippo.incrementGrade();
		std::cout << pippo;
		pippo.incrementGrade(); // too high!
		std::cout << pippo;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	try {
		Bureaucrat	pippo("pippo", 148);
		std::cout << pippo;
		pippo.decrementGrade();
		std::cout << pippo;
		pippo.decrementGrade();
		std::cout << pippo;
		pippo.decrementGrade(); // too low!
		std::cout << pippo;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	//system("leaks Bureaucrat");
}
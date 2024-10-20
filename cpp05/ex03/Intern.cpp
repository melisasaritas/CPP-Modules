/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:28:43 by msaritas          #+#    #+#             */
/*   Updated: 2024/04/22 15:29:23 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Default Constructor of Intern called." << std::endl;
}

Intern::Intern(const Intern &New)
{
    std::cout << "Copy Constructor of Intern called." << std::endl;
	(void)New;
}

void    Intern::operator=(const Intern &New)
{
    std::cout << "Assignment Operator of Intern called." << std::endl;
	(void)New;
}

static Form	*makePresident(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

static Form	*makeRobot(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

static Form	*makeShrubbery(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}


Form    *Intern::makeForm(std::string formName, std::string target) const
{
    Form *(*all_forms[])(const std::string target) = {&makePresident, &makeRobot, &makeShrubbery};
	std::string forms[] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    for (int i = 0; i < 3; i++)
	{
		if (formName == forms[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (all_forms[i](target));
		}
	}

	std::cerr << "Intern can not create a form called " << formName << std::endl;
	return (NULL);

}
        

Intern::~Intern()
{
    std::cout << "Destructor of Intern called." << std::endl;
}
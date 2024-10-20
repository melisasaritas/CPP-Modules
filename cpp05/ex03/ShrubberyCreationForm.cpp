/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:33:13 by msaritas          #+#    #+#             */
/*   Updated: 2024/04/22 15:26:44 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery Creation", 145, 137), target("")
{
    std::cout << "Default Constructor of Shrubbery called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery Creation", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &New)
{
    std::cout << "Copy Constructor of Shrubbery called." << std::endl;
    *this = New;   
}

void    ShrubberyCreationForm::operator=(const ShrubberyCreationForm &New)
{
    std::cout << "Assignment Operator of Shrubbery called." << std::endl;
    this->target = New.target;
}

void    ShrubberyCreationForm::execute(Bureaucrat const &B) const
{
    if (!this->getIfSigned())
        throw FormIsNotSignedException();
    else if (B.getGrade() > this->getGradeToExecute())
        throw GradeTooLowException();
    else if (B.getGrade() < 1)
        throw GradeTooHighException();
    std::ofstream outfile(this->getTarget().append("_shrubbery").c_str());
	outfile <<
	"         v" << std::endl <<
	"        >X<" << std::endl <<
	"         A" << std::endl <<
	"        d$b" << std::endl <<
	"      .d\\$$b." << std::endl <<
	"    .d$i$$\\$$b." << std::endl <<
	"       d$$@b" << std::endl <<
	"      d\\$$$ib" << std::endl <<
	"    .d$$$\\$$$b" << std::endl <<
	"  .d$$@$$$$\\$$ib." << std::endl <<
	"      d$$i$$b" << std::endl <<
	"     d\\$$$$@$b" << std::endl <<
	"  .d$@$$\\$$$$$@b." << std::endl <<
	".d$$$$i$$$\\$$$$$$b." << std::endl <<
	"        ###" << std::endl <<
	"        ###" << std::endl <<
	"        ###" << std::endl <<
	std::endl;
	outfile.close();
}

std::string ShrubberyCreationForm::getTarget() const
{
    return this->target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Destructor of Shrubbery called." << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 14:37:26 by msaritas          #+#    #+#             */
/*   Updated: 2024/04/22 15:14:24 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("presidential pardon", 25, 5), target("")
{
    std::cout << "Default Constructor of Presidential called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("presidential pardon", 25, 5), target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &New)
{
    std::cout << "Copy Constructor of Presidential called." << std::endl;
    *this = New;
}

void    PresidentialPardonForm::operator=(const PresidentialPardonForm &New)
{
    std::cout << "Assignment Operator of Presidential called." << std::endl;
    this->target = New.target;
}

std::string PresidentialPardonForm::getTarget() const
{
    return this->target;
}

void       PresidentialPardonForm::execute(Bureaucrat const &B) const
{
    if (!this->getIfSigned())
        throw FormIsNotSignedException();
    else if (B.getGrade() > this->getGradeToExecute())
        throw GradeTooLowException();
    else if (B.getGrade() < 1)
        throw GradeTooHighException();
    else
        std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
        
PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Destructor of Presidential called." << std::endl;
}

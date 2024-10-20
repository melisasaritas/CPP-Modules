/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 14:30:10 by msaritas          #+#    #+#             */
/*   Updated: 2024/04/22 16:02:39 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("robotomy request", 72, 45), target("")
{
    std::cout << "Default Constructor of Robotomy called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("robotomy request", 72, 45), target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &New)
{
    std::cout << "Copy Constructor of Robotomy called." << std::endl;
    *this = New;
}
        
void    RobotomyRequestForm::operator=(const RobotomyRequestForm &New)
{
    std::cout << "Assignment Operator of Robotomy called." << std::endl;
    this->target = New.target;
}
        
std::string RobotomyRequestForm::getTarget() const
{
    return (this->target);
}
        
void    RobotomyRequestForm::execute(Bureaucrat const &B) const
{
    int value;

    if (!this->getIfSigned())
        throw FormIsNotSignedException();
    else if (B.getGrade() > this->getGradeToExecute())
        throw GradeTooLowException();
    else if (B.getGrade() < 1)
        throw GradeTooHighException();
    std::srand(std::time(nullptr));
    std::cout << "Whirrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr" << std::endl;
    value = std::rand();
    if (value % 2)
        std::cout << this->target << " has been robotomized successfully." << std::endl;
    else
        std::cout << "The robotomy failed." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Destructor of Robotomy called." << std::endl;
}
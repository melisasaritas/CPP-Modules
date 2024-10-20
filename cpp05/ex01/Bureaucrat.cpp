/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:46:16 by msaritas          #+#    #+#             */
/*   Updated: 2024/04/22 14:30:03 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("")
{
    std::cout << "Default Constructor called." << std::endl;
    this->grade = 150;
}

Bureaucrat::Bureaucrat(std::string Name, int grade) : name(Name)
{
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    else
        this->grade = grade;
}
Bureaucrat::Bureaucrat(const Bureaucrat &New)
{
    std::cout << "Copy Constructor called." << std::endl;
    *this = New;
}
void    Bureaucrat::operator=(const Bureaucrat &New)
{
    std::cout << "Assignment Operator called." << std::endl;
    this->grade = New.grade;
}

int Bureaucrat::getGrade() const
{
    return this->grade;    
}

const std::string Bureaucrat::getName() const
{
    return this->name;
}

void    Bureaucrat::incrementGrade()
{
    if (this->grade == 1)
        throw GradeTooHighException();
    else
        this->grade--;
}
void    Bureaucrat::decrementGrade()
{
    if (this->grade == 150)
        throw GradeTooLowException();
    else
        this->grade++;
}


const char *Bureaucrat::GradeTooHighException::what() const throw(){
    return "grade too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
    return "grade too low";
}

std::ostream&	operator<<(std::ostream &o, Bureaucrat& bureaucrat){
    o	<< bureaucrat.getName() << ", bureaucrat grade "
		<< bureaucrat.getGrade() << std::endl;
    return o;
}

void    Bureaucrat::signForm(Form &form){
    try{
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    }   
    catch (std::exception &e) {
        std::cout << this->getName() << ", couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor called." << std::endl;
}

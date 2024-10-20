/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:55:00 by msaritas          #+#    #+#             */
/*   Updated: 2024/04/22 15:22:14 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

Form::Form(): name(""), gradeToSign(150), gradeToExecute(150)
{
    std::cout << "Default Constructor called." << std::endl;
    this->ifSigned = false;
}
Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute): name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    if (gradeToSign > 150)
        throw GradeTooLowException();
    else if (gradeToSign < 1)
        throw GradeTooHighException();
    if (gradeToExecute > 150)
        throw GradeTooLowException();
    else if (gradeToExecute < 1)
        throw GradeTooHighException();
    this->ifSigned = false;
}
Form::Form(const Form &New) : name(New.name), gradeToSign(New.gradeToSign), gradeToExecute(New.gradeToExecute)
{
    std::cout << "Copy Constructor called." << std::endl;
    *this = New;
}

void Form::operator=(const Form &New)
{
    std::cout << "Assignment Operator called." << std::endl;
    this->ifSigned = New.ifSigned;
}

const std::string Form::getName() const
{
    return this->name;
}

bool Form::getIfSigned() const
{
    return this->ifSigned;
}

int Form::getGradeToSign() const
{
    return this->gradeToSign;
}

int Form::getGradeToExecute() const
{
    return this->gradeToExecute;
}

void Form::beSigned(Bureaucrat &B)
{
    if (B.getGrade() <= this->gradeToSign)
        this->ifSigned = true;
    else
        throw GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw(){
    return "grade too high";
}
const char *Form::GradeTooLowException::what() const throw(){
    return "grade too low";
}
const char *Form::FormIsNotSignedException::what() const throw(){
    return "sign the form before execute!!";
}

std::ostream&	operator<<(std::ostream &o, Form& Form)
{
    o	<< Form.getName() << ", signed status: "
		<< Form.getIfSigned() << ", required grade to sign: "
        << Form.getGradeToSign() << ", required grade to execute: "
        << Form.getGradeToExecute() << std::endl;
    return o;
}

void    Form::execute(Bureaucrat const &B) const{
    (void)B;
}


Form::~Form()
{
    std::cout << "Destructor called." << std::endl;
}
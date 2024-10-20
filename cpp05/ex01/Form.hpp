/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:54:48 by msaritas          #+#    #+#             */
/*   Updated: 2024/04/22 14:34:16 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
    private:
        const std::string   name;
        bool                ifSigned;
        const int           gradeToSign;
        const int           gradeToExecute;
    public:
        Form();
        Form(const std::string name, const int gradeToSign, const int gradeToExecute);
        Form(const Form &New);
        void                operator=(const Form &New);
        const std::string   getName();
        bool                getIfSigned();
        int           getGradeToSign();
        int           getGradeToExecute();
        
        
        class GradeTooHighException : public std::exception{
            virtual const char *what() const throw();
        };

        class GradeTooLowException : public std::exception{
            virtual const char *what() const throw();
        };
        
        void          beSigned(Bureaucrat &B);
        
        ~Form();
};

std::ostream&	operator<<(std::ostream &o, Form& Form);

#endif
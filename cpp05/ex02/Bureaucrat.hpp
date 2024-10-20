/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:46:13 by msaritas          #+#    #+#             */
/*   Updated: 2024/04/22 14:59:20 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include "AForm.hpp"
# include <iostream>

class Form;

class Bureaucrat{
    private:
        const std::string   name;
        int                 grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string Name, int grade);
        Bureaucrat(const Bureaucrat &New);
        void                operator=(const Bureaucrat &New);
        int                 getGrade() const;
        const std::string   getName() const;
        
        void                incrementGrade();
        void                decrementGrade();
        
        class GradeTooHighException : public std::exception{
            virtual const char *what() const throw();
        };

        class GradeTooLowException : public std::exception{
            virtual const char *what() const throw();
        };
        
        void    signForm(Form &form);
        void    executeForm(Form const &form);
        ~Bureaucrat();
};

std::ostream&	operator<<(std::ostream &o, Bureaucrat& bureaucrat);

#endif
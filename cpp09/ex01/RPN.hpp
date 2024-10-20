/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 14:58:21 by msaritas          #+#    #+#             */
/*   Updated: 2024/07/27 19:31:09 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP
# include <iostream>
# include <stack>

# define PLUS 11
# define MINUS 12
# define DIVIDE 13
# define MULTIPLY 14
# define ERROR 15

class RPN{
    private:
        std::stack<int> expression;
    public:
        RPN();
        RPN(const RPN &copy);
        RPN &operator=(const RPN &copy);
        void    fill_the_exp(std::string exp);
        void     calculate();
        ~RPN();
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:13:20 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/08 15:05:54 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <iomanip>

class PhoneBook{
    private:
        Contact contacts[8];
        int     index;
        int     size;
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void    AddToContacts(Contact New);
        void    DisplayPhoneBook(void);
        void    DisplaySpecificPerson(int index);
        void    SetIndex(int index);
        void    SetSize(int size);
        int     GetSize(void);
        int     GetIndex(void);
};

#endif
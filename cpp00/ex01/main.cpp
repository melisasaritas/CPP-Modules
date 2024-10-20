/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:57:13 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/07 19:17:58 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
    PhoneBook   MyPhoneBook;
    Contact     Contacts;
    std::string input;
    int         i;

    MyPhoneBook.SetSize(0);
    MyPhoneBook.SetIndex(0);
    while(1)
    {
        std::getline(std::cin, input);
        if (input == "ADD")
        {
            if (MyPhoneBook.GetIndex() != 8)
            {
                i = 0;
                std::cout<<"Enter the first name: ";
                std::getline(std::cin, input);
                if (!(input.empty()))
                {
                    Contacts.SetFirstName(input);
                    i++;
                }
                std::cout<<"Enter the last name: ";
                std::getline(std::cin, input);
                if (!(input.empty()))
                {
                    Contacts.SetLastName(input);
                    i++;
                }
                std::cout<<"Enter the nickname: ";
                std::getline(std::cin, input);
                if (!(input.empty()))
                {
                    Contacts.SetNickName(input);
                    i++;
                }
                std::cout<<"Enter the phone number: ";
                std::getline(std::cin, input);
                if (!(input.empty()))
                {
                    Contacts.SetPhoneNumber(input);
                    i++;
                }
                std::cout<<"Enter the darkest secret: ";
                std::getline(std::cin, input);
                if (!(input.empty()))
                {
                    Contacts.SetDarkestSecret(input);
                    i++;
                }
                if (i == 5)
                {
                    MyPhoneBook.AddToContacts(Contacts);
                    if (MyPhoneBook.GetSize() != 8)
                        MyPhoneBook.SetSize(MyPhoneBook.GetIndex() + 1);
                    MyPhoneBook.SetIndex(MyPhoneBook.GetIndex() + 1);
                }
            }
            else
            {
                MyPhoneBook.SetIndex(0);
                MyPhoneBook.SetSize(8);
            }
        }
        else if (input == "SEARCH")
        {
            int index;
            MyPhoneBook.DisplayPhoneBook();
            std::cout<< "Enter the index to display: ";
            if (!(std::cin >> index) || std::cin.peek() != '\n') {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid input. Please write the command again to search" << std::endl;
            } else {
                if (0 <= index && index < MyPhoneBook.GetSize())
                    std::cout << "|" << std::setw(10) << "index" << "|" << std::setw(10) << "first name" << "|" << std::setw(10) << "last name" << "|" << std::setw(10) <<  "nickname" << "|" << std::endl;
                MyPhoneBook.DisplaySpecificPerson(index);
            }
        }
        else if (input == "EXIT")
            return (0);
    }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:13:20 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/08 18:03:21 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    PhoneBook::AddToContacts(Contact New)
{
    this->contacts[this->index].SetFirstName(New.GetFirstName());
    this->contacts[this->index].SetLastName(New.GetLastName());
    this->contacts[this->index].SetNickName(New.GetNickName());
    this->contacts[this->index].SetPhoneNumber(New.GetPhoneNumber());
    this->contacts[this->index].SetDarkestSecret(New.GetDarkestSecret());
}

void    PhoneBook::DisplaySpecificPerson(int index)
{
    if (0 <= index && index < this->size)
    {
        std::cout << "|" << std::setw(10) << index << "|";
        if (this->contacts[index].GetFirstName().length() > 10)
            std::cout << this->contacts[index].GetFirstName().substr(0,9) << ".|";
        else
            std::cout << std::setw(10) << this->contacts[index].GetFirstName() << "|";
        if (this->contacts[index].GetLastName().length() > 10)
            std::cout << this->contacts[index].GetLastName().substr(0,9) << ".|";
        else
            std::cout << std::setw(10) << this->contacts[index].GetLastName() << "|";
        if (this->contacts[index].GetNickName().length() > 10)
            std::cout << this->contacts[index].GetNickName().substr(0,9) << ".|";
        else
            std::cout << std::setw(10) << this->contacts[index].GetNickName() << "|";
        std::cout<< std::endl;
    }
    else
        std::cout << "Index is out of range. Please write the command again to search" << std::endl;
}

void    PhoneBook::DisplayPhoneBook(void)
{
    int i = -1;
    
    std::cout << "|" << std::setw(10) << "index" << "|" << std::setw(10) << "first name" << "|" << std::setw(10) << "last name" << "|" << std::setw(10) <<  "nickname" << "|" << std::endl;
    while(++i < this->size)
        this->DisplaySpecificPerson(i);
}

void    PhoneBook::SetIndex(int index)
{
    this->index = index;
}

void    PhoneBook::SetSize(int size)
{
    this->size = size;
}

int    PhoneBook::GetIndex(void)
{
    return (this->index);
}

int    PhoneBook::GetSize(void)
{
    return (this->size);
}

PhoneBook::PhoneBook(void)
{}
PhoneBook::~PhoneBook(void)
{}

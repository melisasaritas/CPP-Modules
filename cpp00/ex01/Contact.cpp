/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:31:20 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/06 17:48:52 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    Contact::SetFirstName(std::string FirstName)
{
    this->FirstName = FirstName;
}
void    Contact::SetLastName(std::string LastName)
{
    this->LastName = LastName;
}

void    Contact::SetNickName(std::string NickName)
{
    this->NickName = NickName;
}

void    Contact::SetPhoneNumber(std::string PhoneNumber)
{
    this->PhoneNumber = PhoneNumber;
}

void    Contact::SetDarkestSecret(std::string DarkestSecret)
{
    this->DarkestSecret = DarkestSecret;
}

std::string Contact::GetFirstName(void)
{
    return (this->FirstName);
}

std::string Contact::GetLastName(void)
{
    return (this->LastName);
}

std::string Contact::GetNickName(void)
{
    return (this->NickName);
}

std::string Contact::GetPhoneNumber(void)
{
    return (this->PhoneNumber);
}

std::string Contact::GetDarkestSecret(void)
{
    return (this->DarkestSecret);
}
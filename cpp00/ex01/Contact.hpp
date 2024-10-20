/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:31:20 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/06 19:50:00 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class Contact{
    private:
        std::string FirstName;
        std::string LastName;
        std::string NickName;
        std::string PhoneNumber;
        std::string DarkestSecret;
    public:
        void        SetFirstName(std::string FirstName);
        void        SetLastName(std::string LastName);
        void        SetNickName(std::string NickName);
        void        SetPhoneNumber(std::string PhoneNumber);
        void        SetDarkestSecret(std::string DarkestSecret);
        std::string GetFirstName(void);
        std::string GetLastName(void);
        std::string GetNickName(void);
        std::string GetPhoneNumber(void);
        std::string GetDarkestSecret(void);
};

#endif
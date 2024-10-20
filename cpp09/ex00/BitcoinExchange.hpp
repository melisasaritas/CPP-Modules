/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 15:42:50 by msaritas          #+#    #+#             */
/*   Updated: 2024/07/27 13:52:35 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <iostream>
# include <fstream>
# include <map>

struct amount{
    std::string date;
    float amnt;
};

class BitcoinExchange
{
    private:
        std::map<int, amount> Amount;
        std::map<std::string, float> ExchangeRate;
        std::map<int, amount> TotalPrices;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &copy);
        BitcoinExchange &operator=(const BitcoinExchange &copy);
        
        void    fill_amount(std::string file);
        void    fill_rate();
        void    fill_prices();

        ~BitcoinExchange();
};

#endif
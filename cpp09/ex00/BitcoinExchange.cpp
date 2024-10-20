/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 15:42:53 by msaritas          #+#    #+#             */
/*   Updated: 2024/07/27 14:53:02 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
    *this = copy;
}
        
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copy)
{
    this->Amount = copy.Amount;
    this->ExchangeRate = copy.ExchangeRate;
    this->TotalPrices = copy.TotalPrices;
    return (*this);
}

void    BitcoinExchange::fill_amount(std::string file)
{
    std::ifstream inputFile(file);
    if (!inputFile.is_open())
    {
        std::cerr << "Error opening file!" << std::endl;
        return ;
    }
    
    int i = 0;
    std::string line;
    std::getline(inputFile, line);
    while (std::getline(inputFile, line))
    {
        amount pair;
        if (line.size() < 10)
        {
            pair.date = "abc";
            pair.amnt = 1002;
            this->Amount.insert(std::make_pair(i, pair));
            i++;
            continue;
        }
        
        std::string date = line.substr(0, line.find(' '));
        if (date[4] != '-' || date[7] != '-')
        {
            pair.date = "abc";
            pair.amnt = 1002;
        }
        else if (line.find('|') != std::string::npos)
        {
            try{
                pair.date = date;
                float amnt = std::stof(line.substr(line.find('|') + 1, line.size()));
                if (amnt > 1000)
                    pair.amnt = 1001;
                else
                    pair.amnt = amnt;
            }
            catch(std::exception &e){
                pair.date = "abc";
                pair.amnt = 1002;
            }
        }
        else
        {
            pair.date = date + '.';
            pair.amnt = -1;
        }

        this->Amount.insert(std::make_pair(i, pair));
        i++;
    }
    inputFile.close();
}

void    BitcoinExchange::fill_rate()
{
    std::ifstream inputFile("./data.csv");
    if (!inputFile.is_open())
    {
        std::cerr << "Error opening csv file!" << std::endl;
        return ;
    }
    
    std::string line;
    std::getline(inputFile, line);
    while (std::getline(inputFile, line))
    {
        std::string date = line.substr(0, line.find(','));
        float amnt = std::stof(line.substr(line.find(',') + 1, line.size()));
        this->ExchangeRate.insert(std::make_pair(date, amnt));
    }
    inputFile.close();
}

void    BitcoinExchange::fill_prices()
{
    if (this->ExchangeRate.begin() == this->ExchangeRate.end())
        return ;
    
    std::map<int, amount>::iterator it_a;
    std::map<std::string, float>::iterator it_r;
    int i = 0;
    for (it_a = this->Amount.begin(); it_a != this->Amount.end(); ++it_a) {
        amount pair;
        pair.date = it_a->second.date;
        for (it_r = this->ExchangeRate.begin(); it_r != this->ExchangeRate.end(); ++it_r) {
            if (it_a->second.amnt > 1000)
            {
                pair.amnt = it_a->second.amnt;
                break ;
            }
            else if (it_a->second.date >= it_r->first)
                pair.amnt = it_a->second.amnt * it_r->second;   
            else if (it_a->second.date < "2009-01-02" && it_a->second.amnt != -1)
            {
                pair.date = "bcd";
                pair.amnt = 1002;
                break ;
            }
        }
        this->TotalPrices.insert(std::make_pair(i, pair));
        i++;
    }

    std::map<int, amount>::iterator it;
    it_a = this->Amount.begin();
    for (it = this->TotalPrices.begin(); it != this->TotalPrices.end(); ++it) {
        if (it->second.amnt < 0)
        {
            if (it->second.date.find('.') == it->second.date.size() - 1)
                std::cout << "Error: bad input => " << it->second.date.substr(0, it->second.date.size() - 1) << std::endl;
            else
                std::cout << "Error: not a positive number." << std::endl;
        }
        else if (it->second.amnt > 1000)
        {
            if (it->second.date == "abc")
                std::cout << "Error: wrong format" << std::endl;
            else if (it_a->second.amnt > 1000)
                std::cout << "Error: too large a number." << std::endl;
            else if (it->second.date == "bcd")
                std::cout << "Error: date does not exist." << std::endl;
            else
                std::cout << it->second.date << " => " << it_a->second.amnt << " = " << it->second.amnt << std::endl;
        }
        else
            std::cout << it->second.date << " => " << it_a->second.amnt << " = " << it->second.amnt << std::endl;
        it_a++;
    }

}

BitcoinExchange::~BitcoinExchange()
{
    
}

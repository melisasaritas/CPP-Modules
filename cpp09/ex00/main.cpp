/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 15:42:47 by msaritas          #+#    #+#             */
/*   Updated: 2024/07/25 19:14:05 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        BitcoinExchange Btc;
        Btc.fill_amount(argv[1]);
        Btc.fill_rate();
        Btc.fill_prices();
    }
    else
        std::cout << "Error: could not open file." << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 13:54:55 by msaritas          #+#    #+#             */
/*   Updated: 2024/02/11 13:54:55 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    if (ac == 4)
    {
        std::string line;
        std::string const &filename = av[1];
        std::string const &filename2 = filename + ".replace";
        std::string s1 = av[2];
        std::string s2 = av[3];
        std::ifstream   readfile(filename.c_str());
        if (readfile)
        {
            std::ofstream   file(filename2.c_str());
            while(std::getline(readfile, line))
            {
                std::string newline = "";
                size_t index = 0;
                size_t beforeindex = 0;
                while ((index = line.find(s1, index)) != std::string::npos)
                {
                    newline += line.substr(beforeindex, index - beforeindex);
                    newline += s2;
                    beforeindex = index + s1.length();
                    index += s1.length();
                }
                newline += line.substr(beforeindex);
                file << newline << std::endl;
            }
        }
        else
            std::cout << "Error. Give an existing file name" << std::endl;    
    }
    else
        std::cout << "Error. Correct input is ./replace <filename> <s1> <s2>" << std::endl;
}

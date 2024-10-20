/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 20:00:24 by msaritas          #+#    #+#             */
/*   Updated: 2024/08/02 15:39:51 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <iostream>
# include <iomanip>
# include <list>
# include <vector>
# include <utility>
# include <ctime>

class PmergeMe{
    private:
        double  time_l;
        double  time_v;
    public:
        PmergeMe();
        PmergeMe(const PmergeMe &copy);
        PmergeMe &operator=(const PmergeMe &copy);
        
        int binary_search_for_list(std::list<int> S, int new_element);
        void merge_list(std::list<int> &cont_lis, int *pairs_i, int size);
        void recursiveInsertionSortList(std::list<int> &cont_lis, int pairs_i[], int n);
        void sort_with_l(std::list<int> &cont_lis);
        
        void merge_vector(std::vector<int> &cont_vec, int *pairs_i, int size);
        void recursiveInsertionSortVector(std::vector<int> &cont_vec, int pairs_i[], int n);
        void sort_with_v(std::vector<int> &cont_vec);
        
        double get_time_l();
        double get_time_v();
        ~PmergeMe();
        
};

template<typename T>
int fill_the_containers(char **av, int size, T &container)
{
    int i;
    try{
        for (i = 1; i < size; i++)
        {
            int value = std::stoi(av[i]);
            if (value < 0)
            {
                std::cout << "Error" << std::endl;
                return (0);
            }
            container.push_back(value);
        }
        return 1;
    }
    catch(std::exception &e)
    {
        std::cout << "Error" << std::endl;
        return (0);
    }
}

#endif
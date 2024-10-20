/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 20:00:27 by msaritas          #+#    #+#             */
/*   Updated: 2024/08/02 15:37:31 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
    this->time_l = 0;
    this->time_v = 0;
}
PmergeMe::PmergeMe(const PmergeMe &copy)
{
    *this = copy;
}
PmergeMe &PmergeMe::operator=(const PmergeMe &copy)
{
    this->time_l = copy.time_l;
    this->time_v = copy.time_v;
    return (*this);
}

int PmergeMe::binary_search_for_list(std::list<int> S, int new_element) {
    int left = 0;
    int right = S.size() - 1;

    std::list<int>::iterator temp = S.begin();

    while (left <= right) {
        int mid = left + (right - left) / 2;
        std::advance(temp, mid);
        if (*temp <= new_element) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
        temp = S.begin();
    }

    return left;
}

void PmergeMe::merge_list(std::list<int> &cont_lis, int *pairs_i, int size)
{
    std::list<int> S;
    
    std::list<int>::iterator temp = cont_lis.begin();
    for (int i = 0; i < size; i++)
    {
        std::advance(temp, pairs_i[i]);
        S.push_back(*temp);
        temp = cont_lis.begin();
    }

    std::list<int>::iterator temp2 = cont_lis.begin();
    for (int i = 0; i < size; i++)
    {
        std::advance(temp2, pairs_i[i] + 1);
        int index = binary_search_for_list(S, *(temp2));
        temp = S.begin();
        std::advance(temp, index);
        S.insert(temp, *temp2);
        temp2 = cont_lis.begin();
    }

    if (cont_lis.size() % 2)
    {
        temp2 = std::prev(cont_lis.end());
        int index = binary_search_for_list(S, *(temp2));
        temp = S.begin();
        std::advance(temp, index);
        S.insert(temp, *temp2);
    }
    
    cont_lis = S;
}

void PmergeMe::recursiveInsertionSortList(std::list<int> &cont_lis, int pairs_i[], int n)
{
    if (n <= 1)
        return ;

    recursiveInsertionSortList(cont_lis, pairs_i, n - 1);

    std::list<int>::iterator it = cont_lis.begin();
    std::advance(it, pairs_i[n - 1]);
    int currentElement = *it;

    int j = n - 2;

    while (j >= 0 && *std::next(cont_lis.begin(), pairs_i[j]) > currentElement)
    {
        std::list<int>::iterator it_j = cont_lis.begin();
        std::advance(it_j, pairs_i[j]);
        std::list<int>::iterator it_j_next = cont_lis.begin();
        std::advance(it_j_next, pairs_i[j + 1]);
        std::swap(*it_j, *it_j_next);
        j--;
    }

    
}

void PmergeMe::sort_with_l(std::list<int> &cont_lis)
{
    std::clock_t	clockBegin = clock();
    int pairs_i[cont_lis.size() / 2];
    
    int index = 0;
    for (std::list<int>::iterator it = cont_lis.begin(); it != cont_lis.end(); std::advance(it, 2)) {
        if (it == std::prev(cont_lis.end()))
            break ;
        pairs_i[index++] = std::distance(cont_lis.begin(), it);
    }
    
    std::list<int>::iterator temp = cont_lis.begin();
    std::list<int>::iterator temp2 = cont_lis.begin();
    for (int i = 0; i < index; i++)
    {
        std::advance(temp, pairs_i[i]);
        std::advance(temp2, pairs_i[i] + 1);
        if (*temp > *temp2)
            std::swap(*temp, *temp2);
        temp = cont_lis.begin();
        temp2 = cont_lis.begin();
    }

    recursiveInsertionSortList(cont_lis, pairs_i, index);
    
    merge_list(cont_lis, pairs_i, index);
    std::clock_t	clockEnd = clock();
    this->time_l = double(clockEnd - clockBegin) / CLOCKS_PER_SEC;
}

void PmergeMe::merge_vector(std::vector<int> &cont_vec, int *pairs_i, int size)
{
    std::vector<int> S;
    
    for (int i = 0; i < size; i++)
        S.push_back(cont_vec[pairs_i[i]]);

    for (int i = 0; i < size; i++)
    {
        int index = pairs_i[i] + 1;
        int val = cont_vec[index];
        std::vector<int>::iterator insert_pos = std::lower_bound(S.begin(), S.end(), val);
        S.insert(insert_pos, val);
    }

    if (cont_vec.size() % 2)
    {
        int val = cont_vec.back();
        std::vector<int>::iterator insert_pos = std::lower_bound(S.begin(), S.end(), val);
        S.insert(insert_pos, val);
    }
    
    cont_vec = S;
}

void PmergeMe::recursiveInsertionSortVector(std::vector<int> &cont_vec, int pairs_i[], int n)
{
    if (n <= 1)
        return ;

    recursiveInsertionSortVector(cont_vec, pairs_i, n - 1);

    int currentIndex = pairs_i[n - 1];
    int currentElement = cont_vec[currentIndex];

    int j = n - 2;

    while (j >= 0 && cont_vec[pairs_i[j]] > currentElement)
    {
        std::swap(cont_vec[pairs_i[j + 1]], cont_vec[pairs_i[j]]);
        j--;
    }
}

void PmergeMe::sort_with_v(std::vector<int> &cont_vec)
{
    std::clock_t	clockBegin = clock();
    int pairs_i[cont_vec.size() / 2];
    
    int index = 0;
    for (std::vector<int>::iterator it = cont_vec.begin(); it != cont_vec.end(); std::advance(it, 2)) {
        if (it == std::prev(cont_vec.end()))
            break ;
        pairs_i[index++] = std::distance(cont_vec.begin(), it);
    }
    
    for (int i = 0; i < index; i++)
    {
        int index1 = pairs_i[i];
        int index2 = pairs_i[i] + 1;
        if (cont_vec[index1] > cont_vec[index2])
            std::swap(cont_vec[index1], cont_vec[index2]);
    }

    recursiveInsertionSortVector(cont_vec, pairs_i, index);
    
    merge_vector(cont_vec, pairs_i, index);
    std::clock_t	clockEnd = clock();
    this->time_v = double(clockEnd - clockBegin) / CLOCKS_PER_SEC;
}

double PmergeMe::get_time_l()
{
    return (this->time_l);
}

double PmergeMe::get_time_v()
{
    return (this->time_v);
}

PmergeMe::~PmergeMe()
{
    
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:44:36 by msaritas          #+#    #+#             */
/*   Updated: 2024/07/18 16:07:01 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <vector>

int main()
{
    std::vector<int> vec;
    MutantStack<int> mstack;
    
    mstack.push(5);
    mstack.push(17);

    vec.push_back(5);
    vec.push_back(17);
    
    std::cout << "********************" << std::endl;
    std::cout << mstack.top() << std::endl;
    std::cout << vec.back() << std::endl;

    mstack.pop();
    vec.pop_back();
    
    std::cout << "********************" << std::endl;
    std::cout << mstack.size() << std::endl;
    std::cout << vec.size() << std::endl;
    std::cout << "********************" << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);

    vec.push_back(3);
    vec.push_back(5);
    vec.push_back(737);

    //[...]

    mstack.push(0);
    vec.push_back(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    std::cout << "********************" << std::endl;

    std::vector<int>::iterator it1 = vec.begin();
    std::vector<int>::iterator ite1 = vec.end();
    ++it1;
    --it1;
    while (it1 != ite1)
    {
        std::cout << *it1 << std::endl;
        ++it1;
    }
    std::vector<int> v(vec);
    std::cout << "********************" << std::endl;
    return 0;
}
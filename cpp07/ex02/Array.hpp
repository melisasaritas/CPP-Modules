/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaritas <msaritas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 17:44:40 by msaritas          #+#    #+#             */
/*   Updated: 2024/07/16 20:34:38 by msaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template<typename T>
class Array{
    private:
        T *array;
        unsigned int Size;
    public:
        Array();
        Array(unsigned int n);
        Array(Array<T> const &copy);
        void operator=(Array<T> const &copy);
        T &operator[](unsigned int i);
        class	IndexOutOfBounds: public std::exception{
            public:
                virtual const char *what() const throw()
                {
                    return ("Error: index out of bounds");
			    }
        };
        unsigned int size();
        ~Array();
};

template<typename T>
Array<T>::Array()
{
    this->array = NULL;
    this->Size = 0;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
    this->array = new T[n]();
    this->Size = n;
}
template<typename T>
Array<T>::Array(Array<T> const &copy)
{
    this->Size = copy.Size;
    this->array = new T[this->Size];
    for (unsigned int i = 0; i < this->Size; ++i) {
        this->array[i] = copy.array[i];
    }
}

template<typename T>
void    Array<T>::operator=(Array<T> const &copy)
{
    if (this != &copy) {
        delete[] this->array;
        this->Size = copy.Size;
        this->array = new T[this->Size];
        for (unsigned int i = 0; i < this->Size; ++i) {
            this->array[i] = copy.array[i];
        }
    }
}

template<typename T>
T &Array<T>::operator[](unsigned int i)
{
    if (i >= this->Size || i < 0)
        throw Array<T>::IndexOutOfBounds();
    return this->array[i];
}

template<typename T>
unsigned int Array<T>::size()
{
    return this->Size;
}

template<typename T>
Array<T>::~Array()
{
    delete[] this->array;
}

#endif
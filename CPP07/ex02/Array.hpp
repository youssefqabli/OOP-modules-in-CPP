/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 03:41:48 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/05/24 23:02:38 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <exception>


template<typename T>
class Array {
    private :
        T   *array;
        unsigned int _size;
    public :
        Array<T>() : _size(0) {
            array = new T[_size];
        }
        
        Array<T>(std::size_t n) : _size(n) {
            array = new T[_size];
        }
        
        Array<T>(Array<T> const &other) : _size(other.size()) {
            array = new T[_size];
            for (std::size_t i = 0; i < _size; i++)
                array[i] = other.array[i];
        }
        
        Array<T> &operator=(Array<T> const &other) {
            if (this != &other)
            {
                if (array != NULL)
                    delete[] array;
                _size = other.size();
                array = new T[_size];
                for (unsigned int i = 0; i < _size; i++)
                    array[i] = other.array[i];
            }
            return *this;
        }
        
        ~Array<T>() {
            if(array != NULL)
                delete[] array;
        }


        T  &operator[](std::size_t i) {
            if (array == NULL || i < 0 || i >= _size)
                throw indexIsOutException();
            return array[i];
        }
        
       const T  &operator[](std::size_t i) const {
            if (array == NULL || i < 0 || i >= _size)
                throw indexIsOutException();
            return array[i];
        }

        

        unsigned int size() const {
            return _size;
        }

        class indexIsOutException : public std::exception {
            public :
                const char *what() const throw() {
                    return "Error : Wrong Index!";
                }
            
        };

};
template <typename T>
std::ostream &operator<<(std::ostream &out, const Array<T> &arr);

#endif
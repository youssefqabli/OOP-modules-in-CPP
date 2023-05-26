/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 22:13:53 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/05/25 22:41:30 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>


class NoOccurenceException : public std::exception {
    public : 
        virtual const char *what() const throw() {
            return "no occurence found!";
        }
};

template<typename T>
typename T::iterator easyfind(T &src, int i) {
    typename T::iterator  iter;

    iter = find(src.begin(), src.end(), i);
    if (iter == src.end())
        throw (NoOccurenceException());
    return iter;
} 

#endif 
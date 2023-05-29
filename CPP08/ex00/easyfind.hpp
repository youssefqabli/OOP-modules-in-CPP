/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 22:13:53 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/05/29 18:49:01 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>



template<typename T>
typename T::iterator easyfind(T &src, int i) {
    typename T::iterator  iter;

    iter = find(src.begin(), src.end(), i);
    if (iter == src.end())
        throw (std::out_of_range("no occurence found!"));
    return iter;
} 

#endif 
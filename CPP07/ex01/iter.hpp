/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 00:54:56 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/05/24 22:07:03 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template<typename P>
void    print(const P &arg)
{
    std::cout << arg << std::endl;
}

template<typename T>
void iter (T *arr,int len, void (* func)(const T &)){
    for (int i = 0; i < len; i++) {
        func(arr[i]);
    }
}

#endif
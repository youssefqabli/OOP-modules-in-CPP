/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 00:38:25 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/05/24 00:53:14 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b) {
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T min(T &a, T &b) {
    if (a < b) 
        return a;
    else
        return b;
}

template <typename T>
T max(T &a, T &b) {
    if (a > b)
        return a;
    else 
        return b;
}

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 22:27:55 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/05/26 00:37:18 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main () {
    std::vector<int> vec;
    std::vector<int>::iterator iter; 

    for (size_t i = 0; i < 100; i++) {
        vec.push_back(i);
    }
    iter = easyfind(vec, 65);
    std::cout << "the occurence found at index : "<< *iter << std::endl;
    iter = easyfind(vec, 3);
}
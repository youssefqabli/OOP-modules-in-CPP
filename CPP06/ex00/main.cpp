/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:06:14 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/05/21 01:25:37 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>

int main (int ac, char *av[]) {
  if (ac == 1){
    std::cout << "Error: no arguments" << std::endl;
    return 1;
  }
  ScalarConverter::convert(av[1]);
}


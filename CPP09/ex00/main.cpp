/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:53:59 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/05/31 18:06:57 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <map>
#include <iostream>

int main(int ac, char *av[]) {
    if (ac != 2) {
        std::cerr << "Error: could not open the file!" << std::endl;
        exit(1);
    }
    BitcoinExchange obj(av[1]);
    
    obj.printResult();
}

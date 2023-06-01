/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 23:46:07 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/06/01 01:47:58 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main (int ac, char *av[]) 
{
    if (ac != 2)
    {
        std::cerr << "Error: invlaid args num" << std::endl;
        exit (1);
    }
    try {

    RPN obj(av[1]) ;
    std::cout << obj.calcul() <<std::endl;
    }
    catch (std::exception &e ) {
        std::cout << e.what() << std::endl;
    }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 01:55:34 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/03/23 02:31:52 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"


int main(int ac, char **av)
{
    if (ac == 4)
    {
        Replace replace(av[1], av[2], av[3]);
        replace.replace();
        return(0);
    }
    else
    {
        std::cout<<"Wrong Arguments Number "<<std::endl;
        return(0);
    }
}
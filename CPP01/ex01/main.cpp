/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:54:42 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/03/25 04:24:11 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{

    Zombie *horde = ZombieHorde(5, "youssef" );

    for (int i = 0; i < 5; i++) {
        horde[i].announce();
    }
    delete[] horde;
    return(0);
}
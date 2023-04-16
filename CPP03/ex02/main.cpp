/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:55:58 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/04/14 06:33:25 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    
    FragTrap    player1("Player_1");

    std::cout << std::endl;
    player1.attack("enemy");
    player1.takeDammage(80);
    player1.beRepaired(30);

    player1.highFivesGuys();
    std::cout << std::endl;

    FragTrap   player2("player_2");
    player2.takeDammage(130);
    player2.attack("enemy");
    player2.beRepaired(40);
    std::cout << std::endl;


    return (0);
    
}
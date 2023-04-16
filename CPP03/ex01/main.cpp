/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:55:58 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/04/14 07:03:04 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    
    ClapTrap    Clap_player("Player_1");
    ScavTrap    Scav_player("Player_2");

    Scav_player.attack("enemy");
    Scav_player.takeDammage(80);
    Scav_player.beRepaired(30);

    Scav_player.guardGate();

    ScavTrap    Scav_player2("Scav_player2");
    Scav_player2.takeDammage(130);
    Scav_player2.attack("enemy");
    Scav_player2.beRepaired(40);

    ClapTrap    Scav_player3("Scav_player3");
    std::cout << std::endl;
    return (0);
}
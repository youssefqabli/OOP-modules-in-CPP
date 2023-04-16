/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:55:58 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/04/14 07:00:18 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    
    ClapTrap Player1;
    ClapTrap Player2("test");
    Player1.attack("enemy");
    std::cout << Player1.getAttack_Dammage()<<std::endl;
    std::cout << Player1.getEnergy_Points()<<std::endl;
    std::cout << Player1.getHit_Points()<<std::endl;
    
    
}
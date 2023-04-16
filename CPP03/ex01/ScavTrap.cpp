/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 06:56:29 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/04/14 05:56:32 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    name = "";
    hit_points = 100;
    energy_points = 50;
    attack_dammage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
};

ScavTrap::ScavTrap(std::string name) {
    this->name = name;
    hit_points = 100;
    energy_points = 50;
    attack_dammage = 0;
    std::cout << "ScavTrap constructor called" << std::endl;
};

ScavTrap::ScavTrap(ScavTrap const &other) {
    std::cout << "Scavtrap copy constructor called" << std::endl;
    *this = other; 
};

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
    std::cout << "copy assignment operator called " << std::endl;
    if (this != &other)
    {
        name = other.getName();
        hit_points = other.getHit_Points();
        energy_points = other.getEnergy_Points();
        attack_dammage = other.getAttack_Dammage();
    }
    return *this;
};

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
};

void    ScavTrap::attack(const std::string &target) {
    std::cout << "ScavTrap will attack " << std::endl;
    if (hit_points == 0)
    {
        std::cout << name << "died ! " << std::endl;
        return ;
    }
    if (energy_points == 0)
    {
        std::cout << name << " run out of energy ! can't attack" << std::endl;
        return;
    }
    energy_points--;
    std::cout << name << "attack " << target << "causes " << attack_dammage << " point of dammage!" << std::endl;
}

void    ScavTrap::guardGate() {
    if (hit_points == 0) 
    {
        std::cout << name << " died ! he can't guard the gate " << std::endl;
        
    }
    if (energy_points == 0)
    {
        std::cout << name << "have 0 energy point! he can't guard the gate" << std::endl;
        return ;
    }
    std::cout << "Scavtrap " << name << " is in teh guarding of the gate" << std::endl;
    energy_points--;
}
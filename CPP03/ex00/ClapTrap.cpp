/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 23:51:02 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/04/14 22:09:45 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

std::string    ClapTrap::getName() const {
    return name;
}

int		ClapTrap::getAttack_Dammage() const {
	return attack_dammage;
}

int		ClapTrap::getEnergy_Points() const {
	return energy_points;
}

int		ClapTrap::getHit_Points() const {
	return hit_points;
}

ClapTrap::ClapTrap() : name(""), hit_points(10), energy_points(10), attack_dammage(0) {
    std::cout << "constructor called" << std::endl;
};

ClapTrap::ClapTrap(std::string name) : hit_points(10), energy_points(10), attack_dammage(0) {
    std::cout << "parametric constructor called" << std::endl;
    this->name = name;
};

ClapTrap::ClapTrap(const ClapTrap &other) {
    std::cout << "copy constructor called" << std::endl;
    if (this != &other)
        *this = other;
};

ClapTrap    &ClapTrap::operator=(const ClapTrap &other) {
    std::cout << "copy assignment operator called" << std::endl;
    if (this != &other)
    {
        name = other.getName();
        hit_points = other.getHit_Points();
        energy_points = other.getEnergy_Points();
        attack_dammage = other.getAttack_Dammage();
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "destructor called " << std::endl;
};


void    ClapTrap::attack(const std::string &target) {
    if (hit_points == 0)
    {
        std::cout << name << " is dead! he can't attack" << std::endl;
        return;
    }
    if (energy_points == 0)
    {
        std::cout << name <<" energy is run out! he can't attack" << std::endl; 
        return ;
    }
    energy_points--;
    std::cout << name << " attack " << target << " causing " << attack_dammage << " point of dammage "<< std::endl;
    
}

void    ClapTrap::takeDammage(unsigned int amount) {
    std::cout << name << " take dammage " << amount << ", HP" << getHit_Points() << " ->";
    hit_points -= amount;
    if (hit_points < 0)
        hit_points = 0;
    std::cout << hit_points << std::endl;
    if (hit_points == 0)
    std::cout << name << " is died" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount ) {
    if (hit_points == 0)
    {
        std::cout << name << " is died !, he can't repaired " << std::endl;
        return;
    }
    if (energy_points == 0)
    {
        std::cout << name << " run out of energy! he can't repaired" << std::endl;
        return;
    }
    energy_points--;
    std::cout << name << " repaired " << amount << ", hit points : " << getHit_Points() << " -> ";
    hit_points += amount;
    std::cout << hit_points << std::endl; 
}
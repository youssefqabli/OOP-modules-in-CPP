/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 04:57:02 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/04/14 05:26:53 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
    name = "";
    hit_points = 100;
    energy_points = 100;
    attack_dammage = 30;
    std::cout << "FragTrap constructor called" << std::endl;
};

FragTrap::FragTrap(std::string name) {
    this->name = name;
    hit_points = 100;
    energy_points = 100;
    attack_dammage = 30;
    std::cout << "FragTrap constructor called" << std::endl;
};

FragTrap::FragTrap(FragTrap const &other) {
    std::cout << "FragTrap copy constructor" <<std::endl;
    *this = other;
};

FragTrap &FragTrap::operator=(const FragTrap &other) {
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    if (this != &other)
    {
        name = other.getName();
        hit_points = other.getHit_Points();
        energy_points = other.getEnergy_Points();
        attack_dammage = other.getAttack_Dammage();
    }
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called" <<std::endl;
};

void    FragTrap::attack(const std::string &target) {
    std::cout << "FragTrap will attack" << std::endl;
    if (hit_points == 0)
    {
        std::cout << name << " died! he can't attack" << std::endl;
        return;
    }
    if (energy_points == 0)
    {
        std::cout << name << " energy points is 0! he can't attack" << std::endl;
        return;
    }
    energy_points--;
    std::cout << name << " attack " << target << " and cause " << attack_dammage << " points of dammage!" << std::endl;
}

void    FragTrap::highFivesGuys() {
    if (hit_points == 0)
    {
        std::cout << name << " died! he can't do high five" <<std::endl;
        return;
    }
    if (energy_points == 0)
    {
        std::cout << name << " energy points is 0! he can't attack" <<std::endl;
        return;
    }
    std::cout << name << " high five!" << std::endl;
    energy_points--;
}
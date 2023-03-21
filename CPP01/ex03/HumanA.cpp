/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 01:38:57 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/03/21 00:54:12 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name (name), weapon(weapon) {}

HumanA::~HumanA() {};

void HumanA::attack() {
    std::cout<<this->name << "attacks with their " <<this->weapon.getType()<<std::endl;
}
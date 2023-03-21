/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 20:04:34 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/03/21 00:55:19 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
    this->type = type;
}

Weapon::~Weapon() {
 ;   
}

std::string Weapon::getType()  {
	return this->type;
}

void Weapon::setType(std::string type) {
	this->type = type;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 02:45:37 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/04/16 02:47:20 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

#include <iostream>

WrongCat::WrongCat() {
	this->type = " WrongCat";

	std::cout << "WrongCat: Default constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) {
	*this = other;

	std::cout << "WrongCat: Copy constructor" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat: Destructor" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << " WrongCat: Meow! " << std::endl;
}
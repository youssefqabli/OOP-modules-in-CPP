/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 18:35:38 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/04/16 18:40:30 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << "WrongCat constructor called" << std::endl;
    type = "WrongCat";
};

WrongCat::WrongCat(std::string name) {
    std::cout << "WrongCat constructor called" << std::endl;
    type = "WrongCat";
    this->name = name;
};

WrongCat::WrongCat(WrongCat const &other) {
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &other)
        type = other.type;
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << "Cat destructor called" << std::endl;
};

std::string WrongCat::getType(void) const {
    return type;
};

void    WrongCat::makeSound(void) const {
    std::cout << "WrongCat: Meow!!" << std::endl;
} 
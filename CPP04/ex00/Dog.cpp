/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 21:37:24 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/04/16 02:00:53 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
};

Dog::Dog(std::string str) {
    std::cout << "Dog parametric constructor called " << std::endl;
     type = str;
};

Dog::Dog(Dog const &other) {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = other;
}

Dog &Dog::operator=(const Dog &other) {
    std::cout << "Dog copy assignment operator called" << std::endl;
        type = other.getType();
        return *this;
 };

Dog::~Dog(){
    std::cout << "Dog destructor called " << std::endl;
};

void    Dog::makeSound() {
    std::cout << "Dog making sound <woof woof>" << std::endl;
};

std::string     Dog::getType() const {
    return type;
}
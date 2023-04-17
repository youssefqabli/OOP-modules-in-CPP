/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 21:08:23 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/04/16 01:55:19 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal"){
    std::cout << "Animal default constructor called" << std::endl;
};
Animal::Animal(std::string str ) : type(str) {
    std::cout << "Animal parametric constuctor called" <<  std::endl;
};

Animal::Animal(Animal const &other) {
    std::cout << "Animal copy constructor called " <<std::endl;
    *this = other;
};

Animal &Animal::operator=(const Animal &other) {
    std::cout << "Animal copy assignment operator called" << std::endl;
    if (this != &other)
        this->type = other.getType();
    return *this;
};


Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
};

void    Animal::makeSound() {
    std::cout << "Animal making sound " << std::endl;
}

std::string     Animal::getType() const{
    return type;
}
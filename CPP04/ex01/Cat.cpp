/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 22:48:39 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/04/16 06:34:25 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
};

Cat::Cat(std::string str) {
	std::cout << "Cat parametric constructor called" << std::endl;
	type = str;
};

Cat::Cat(Cat const &other) {
	std::cout << "Cat copy constructro called " << std::endl;
	*this = other;
};

Cat &Cat::operator=(const Cat &other) {
	std::cout << "Cat copy assignment operator called " << std::endl;
	if (this != &other)
		*this = other;
	return *this;
};

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
};

void	Cat::makeSound() const {
	std::cout << "Cat making sound: <meow>" << std::endl;
};

std::string Cat::getType() const {
	return  type;
}

		std::string Cat::getBrain() const {
			return ("this") ;
		}
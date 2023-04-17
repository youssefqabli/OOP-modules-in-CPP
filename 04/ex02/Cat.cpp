/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 18:35:13 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/04/16 21:02:14 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat constructor called" << std::endl;
    type = "Cat";
}

Cat::Cat(std::string name) {
    std::cout << "Cat constructor called" << std::endl;
    type = "Cat";
    this->name = name;
}

Cat::Cat(Brain brain) {
    std::cout << "Cat brain constructor called" << std::endl;
    type = "Cat";
    this->brain = new Brain(brain);
}

Cat::Cat(Cat const &other) {
    std::cout << "Cat copy constructor called" << std::endl;
    *this = other;
}

Cat &Cat::operator=(const Cat &other) {
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &other)
    {
        type = other.type;
        brain = new Brain(*other.brain);
    }
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
	// delete brain;
};

void    Cat::makeSound(void) const {
    std::cout << "Cat: Meow!!" << std::endl;
}

void   Cat::setBrain(std::string str, int n) {
    for (int i = 0; i < n; i++)
        brain->setIdeas(str, n);
}

Brain   &Cat::getBrain(void) const {
    return *brain;
} 
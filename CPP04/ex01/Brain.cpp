/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 05:18:49 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/04/16 06:24:42 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

#include <iostream>

Brain::Brain() {
    std::cout << "Brian default construuctor called " << std::endl;
}

Brain::Brain(const Brain& other) {
	*this = other;

	std::cout << "Animal: Copy constructor" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain: Destructor" << std::endl;
}

Brain& Brain::operator=(const Brain& other) {
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = other.ideas[i];
	}

	std::cout << "Brain: Assignment operator" << std::endl;

	return *this;
}

std::string Brain::getIdeas(int i) const
{
	return this->ideas[i];
}

void Brain::setIdeas(int i, std::string idea)
{
	this->ideas[i] = idea;
}

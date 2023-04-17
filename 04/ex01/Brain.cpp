/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 18:19:56 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/04/16 18:19:57 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &other) {
	std::cout << "Brain copy constructor called" << std::endl;
	for(int i = 0; i < 100; ++i)
		ideas[i] = other.ideas[i];
}

Brain &Brain::operator=(const Brain &other) {
	std::cout << "Brain copy assignment operator called" << std::endl;
	if(this != &other)
		for(int i = 0; i < 100; i++)
			ideas[i] = other.ideas[i];
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

void    Brain::setIdeas(std::string str, int n) {
    for (int i = 0; i < n; i++)
        ideas[i] = str;
}

void    Brain::printIdeas(int n) {
    for (int i = 0; i < n; i++)
        std:: cout << ideas[i] << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 22:02:26 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/04/16 01:59:34 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal {
	
	public :
		Cat();
		Cat(std::string str);
		Cat(Cat const &other);
		Cat &operator=(const Cat &other);
		~Cat();
		void	makeSound() const;
		std::string getType() const;
};

#endif

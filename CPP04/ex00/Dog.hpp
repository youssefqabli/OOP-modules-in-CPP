/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 21:37:09 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/04/15 22:52:53 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
   public :
        Dog();
        Dog(std::string str);
        Dog(Dog const &other);
        Dog &operator=(const Dog &other);
        ~Dog();
        void    makeSound();
        std::string getType() const;
};

#endif 
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 18:31:27 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/04/16 06:23:53 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Brain.hpp"
#include <iostream>

class Animal {
    protected :
        std::string type;
    public :
        Animal();
        Animal(std::string str);
        Animal(Animal const &other);
        Animal &operator=(const Animal &other);
        ~Animal();
        
        void    makeSound() ;
        std::string getType() const ;
};

#endif 
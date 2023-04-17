/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 18:19:19 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/04/16 18:19:20 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AINMAL_HPP
# define AINMAL_HPP

#include <iostream>

class Animal {
protected:
    std::string type;
    std::string name;
public:
    Animal();
    Animal(std::string name);
    Animal(Animal const &other);
    Animal &operator=(const Animal &other);
    virtual ~Animal();

    std::string         getType(void) const;
    virtual void        makeSound(void) const;
};

#endif

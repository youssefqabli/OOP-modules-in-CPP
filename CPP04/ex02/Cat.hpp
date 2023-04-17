/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 18:35:15 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/04/16 18:40:54 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
    Brain   *brain;
public:
    Cat();
    Cat(std::string name);
    Cat(Brain brain);
    Cat(Cat const &other);
    Cat &operator=(const Cat &other);
    ~Cat();
    
    void        makeSound(void) const;
    void        setBrain(std::string str, int n);
    Brain       &getBrain(void) const;
};

#endif 
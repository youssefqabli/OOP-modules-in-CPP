/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 18:35:35 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/04/16 18:40:34 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGAINMAL_HPP
# define WRONGAINMAL_HPP

#include <iostream>

class WrongAnimal {
protected:
    std::string type;
    std::string name;
public:
    WrongAnimal();
    WrongAnimal(std::string name);
    WrongAnimal(WrongAnimal const &other);
    WrongAnimal &operator=(const WrongAnimal &other);
    ~WrongAnimal();

    std::string getType(void) const;
    void        makeSound(void) const;
};

#endif
 
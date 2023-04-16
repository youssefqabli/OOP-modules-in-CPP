/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 01:28:46 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/04/16 01:50:02 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
    protected :
        std::string type;
    public :
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(WrongAnimal const &other);
        WrongAnimal &operator=(const WrongAnimal &other);
        ~WrongAnimal();

        std::string getType() const;
        void    makeSound() const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 21:35:07 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/03/21 00:52:42 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Weapon_HPP
#define Weapon_HPP

#include <iostream>

class Weapon {
    private :
        std::string type;
    public : 
        Weapon(std::string type);
        ~Weapon();
        std::string     getType();
        void setType(std::string type);
};

#endif
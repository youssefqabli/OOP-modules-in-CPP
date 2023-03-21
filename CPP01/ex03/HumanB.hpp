/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 21:43:30 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/03/20 18:53:17 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanB_HPP
#define HumanB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
    private :
        std::string name;
        Weapon *weapon;
    public :
        HumanB(std::string name);
        ~HumanB();
        void    setWeapon(Weapon &weapon);
        void    attack();
};

#endif
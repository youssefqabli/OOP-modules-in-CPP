/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 21:43:35 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/03/20 19:33:18 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanA_HPP
#define HumanA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {
    private :
        std::string name;
        Weapon &weapon;
    public :
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void attack();
};

#endif
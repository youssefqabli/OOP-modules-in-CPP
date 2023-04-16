/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 23:50:49 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/04/14 07:02:24 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
    protected :
        std::string name;
        int     hit_points;
        int     energy_points;
        int     attack_dammage;
    
    public :
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &other);
        ClapTrap &operator=(const ClapTrap &other);
        ~ClapTrap();
        
        std::string    getName() const ;
        int            getHit_Points() const ;
        int            getEnergy_Points() const ;
        int            getAttack_Dammage() const ;
        
        void    attack(const std::string &target);
        void    takeDammage(unsigned int amount);
        void    beRepaired(unsigned int amount);  
};

#endif

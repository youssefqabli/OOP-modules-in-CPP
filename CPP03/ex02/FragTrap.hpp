/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 04:51:40 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/04/14 04:56:13 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "iostream"
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public :
        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap const &other);
        FragTrap&operator=(const FragTrap &other);
        ~FragTrap();
        
        void    attack(const std::string &target);
        void    highFivesGuys();
};

#endif
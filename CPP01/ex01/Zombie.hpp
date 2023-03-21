/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:23:06 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/03/18 16:43:18 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
    private :
        std::string name;
        
    public :
        Zombie ();
        Zombie (std::string str); 
        ~Zombie();
        void    announce(void);
        void    setName(std::string name);
};
        Zombie* ZombieHorde(int N, std::string name );

#endif 
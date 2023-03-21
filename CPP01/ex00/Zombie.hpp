/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:23:06 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/03/16 22:43:17 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
    private :
        std::string name;
        
    public :
        Zombie ();
        Zombie (std::string str); 
        ~Zombie();
        void    announce(void);
};
        Zombie* newZombie( std::string name );
        void randomChump( std::string name );

#endif 
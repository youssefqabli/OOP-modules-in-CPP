/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:23:04 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/03/24 18:27:58 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(){
    name = "default"; 
        std::cout<<"UNDEFINED ZOMBIE : I'M ALIVE..."<<std::endl;
};

Zombie::Zombie(std::string str){
    name = str;
    std::cout<<name<<": I'M ALIVE"<<std::endl;
}

Zombie::~Zombie() {
    std::cout<<name<<" : Ciao Adios"<<std::endl;
}

void    Zombie::announce() {
    std::cout<<name<<" : BraiiiiiiinnnzzzZ..."<<std::endl;
}

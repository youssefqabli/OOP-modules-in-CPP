/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:23:04 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/03/18 17:18:27 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int i = 1;

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

void    Zombie::setName(std::string name) {

    this->name = name + std::to_string(i) ;
    i++;
}
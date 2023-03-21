/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:19:33 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/03/17 00:11:07 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

int main()
{
    Zombie Undifined;
    Zombie Difined ("rotter");
    Zombie *newDifined = newZombie("new_rotter");
    randomChump(std::string ("random rotter"));
    Difined.announce();
    newDifined->announce();
    delete newDifined;
    
} 
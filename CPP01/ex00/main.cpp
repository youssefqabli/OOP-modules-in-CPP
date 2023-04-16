/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:19:33 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/04/03 22:04:20 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

int main()
{
    Zombie Undifined;
    Zombie Difined ("rotter");
    Difined.announce();
    Zombie *newDifined = newZombie("new_rotter");
    randomChump("random rotter");
    newDifined->announce();
    delete newDifined;
}
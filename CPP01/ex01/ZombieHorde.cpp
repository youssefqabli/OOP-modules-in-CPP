/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 18:09:49 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/03/18 17:06:20 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* ZombieHorde(int N, std::string name ) {
    

    Zombie *horde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        horde[i].setName(name);   
    }
    return (horde);
}
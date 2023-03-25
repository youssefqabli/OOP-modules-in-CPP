/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:15:22 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/03/24 04:03:55 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
    std::cout << "Harl: Hello .." << std::endl;
}

Harl::~Harl() {
    std::cout << "Harl: Goodbye .." << std::endl;
}

void    debug(){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    info() {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void wrining () {
    std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<< std::endl;
}

void    error() {
    std::cout << "This is unacceptable! I want to speak to the manager now."<< std::endl;
}

void    Harl::complain(std::string level){
    
    std::string level_list[4] = {"debug", "info", "warning", "error"};
    void    (Harl::*functions[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int i = 0; i < 4; i++){
        if (level == level_list[i])
            (this->*functions[i])();
    }
}
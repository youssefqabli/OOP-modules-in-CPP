/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:06:10 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/04/05 20:28:39 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl {
    private :
        void    debug();
        void    info();
        void    warning();
        void    error();
    
    public : 
        Harl();
        ~Harl();
        void    complain(std::string level);   
};
 
#endif
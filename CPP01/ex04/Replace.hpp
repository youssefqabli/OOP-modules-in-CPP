/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 02:18:41 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/04/04 02:34:53 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

class Replace {
    private :
        std::string filename;
        std::string s1;
        std::string s2;
    public :
        Replace(std::string filename, std::string s1, std::string s2);
        ~Replace();
    void    replace();
};

#endif
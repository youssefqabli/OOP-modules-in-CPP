/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:29:55 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/05/21 01:53:31 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ScalarConverter.hpp"


void    ScalarConverter::convert(std::string str) {
    std::string specialTypes[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
    
    std::string     to_char = "";
    int             to_int = 0;
    float           to_float = 0;
    double          to_double = 0;

    if (str.size() == 1 && std::isprint(str[0]) && !std::isdigit(str[0])) {
        to_char = str[0];
        std::cout << "char: " << to_char <<std::endl;
        std::cout << "int: " << static_cast<int>(to_char[0]) <<std::endl;
        std::cout << "float: " << static_cast<float>(to_char[0]) <<std::endl;
        std::cout << "double: " << static_cast<float>(to_char[0]) <<std::endl;
    }
    
    to_int = std::atoi(str.c_str());
    
    if (str[str.length() - 1] == 'f') 
    {
        to_float = std::atof(str.c_str());
        to_double = static_cast<double>(to_float);
    }
    else
    {
        to_double = std::atof(str.c_str());
        to_float = static_cast<float>(to_double);
    }
    
    for (int i = 0; i < 6; ++i) {
        if(str == specialTypes[i])
        {
            to_char = "impossible";
            break;
        }
    }
    if (to_char == "" && std::isprint(to_int)) {
        to_char = "'";
        to_char += static_cast<char>(to_int);
        to_char += "'";
    }
    else if(to_char == "") {
        to_char = "non displayable";
    }

    std::cout << "char: " << to_char << std::endl;
    if (to_char == "impossible") {
        std::cout << "int:  impossible" << std::endl;
    }
    else {
        std::cout << "int: " << to_int << std::endl;
    }
    
    if (to_char == "impossible" && to_float == 0) {
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: imposisble" << std::endl;
    }
    else {
        if (to_char != "impossible" && to_float - static_cast<int>(to_float) == 0) {
            std::cout << "float: " << to_float << ".0f" << std::endl;
            std::cout << "double: " << to_double << ".0" << std::endl;
        }
        else {
            std::cout << "float: " << to_float << "f" << std::endl;
            std::cout << "double: " << to_double << std::endl;
        }
    }
    
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:29:55 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/05/23 16:45:10 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ScalarConverter.hpp"

void   impossible() {
    
        std::cout << "char: impossible"  << std::endl;
        std::cout << "int: impossible"  << std::endl;
        std::cout << "float: impossible"  << std::endl;
        std::cout << "double: impossible"  << std::endl;
        exit(1);
}

void print(std::string type) {
    std::cout << "char: impossible"  << std::endl;
    std::cout << "int: impossible"  << std::endl;
    
    if (type[type.length() - 1] == 'f' && type[type.length() - 2] == 'f') {

        std::cout << "float: "  << type << std::endl;
        std::cout << "double: "  << type.erase(type.size() - 1) << std::endl;
    }
    else {   
        std::cout << "float: "  << type << "f" << std::endl;
        std::cout << "double: "  << type << std::endl;
    }
    exit (1);
    }

void    ScalarConverter::convert(std::string str) {
    std::string specialTypes[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
    
    std::string     to_char = "";
    int             to_int = 0;
    float           to_float = 0;
    double          to_double = 0;

        
    for (int i = 0; i < 6; ++i) {
        if(str == specialTypes[i])
        {
            print(specialTypes[i]);
            break;
        }
        
    }
    if (isprint(str[0]) && !isdigit(str[0]) && str[1] != '\x00' && isalpha(str[str.length() - 1])){
        impossible();
    }
        
    if (str.size() == 1 && std::isprint(str[0]) && !std::isdigit(str[0])) {
        to_char = str[0];
        std::cout << "char: " << to_char <<std::endl;
        std::cout << "int: " << static_cast<int>(to_char[0]) << std::endl;
        std::cout << "float: " << static_cast<float>(to_char[0]) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<float>(to_char[0]) << ".0" << std::endl;
        return;
    }
    
    for (unsigned int i = 0; i < str.length() - 1 ; i++) {
        if (isalpha(str[i]))
            impossible();    
    }
    if ((str[str.length() - 1] == 'f' && (str[str.length() - 2] == '.' )) || str[str.length() -1] == '.' || str[0] == '.' )
        impossible();
    if (str[str.length() -1] != 'f' && isalpha(str[str.length() -1]) == 1 ) 
        impossible();

    
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
    
    if (to_char == "" && std::isprint(to_int)) {
        to_char += static_cast<char>(to_int);
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

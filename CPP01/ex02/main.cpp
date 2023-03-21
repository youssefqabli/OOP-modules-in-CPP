/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 18:21:03 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/03/18 19:05:27 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string     str = "HI THIS IS BRAIN";
    std::string*    stringPTR = &str;
    std::string&    stringREF = str;

    std::cout<<"The memory address of the string variable : "<<&str<<std::endl;
    std::cout<<"The memory address held by stringPTR      : "<<stringPTR<<std::endl;
    std::cout<<"The memory address held by stringREF      : "<<&stringREF<<std::endl;
    
    std::cout<<std::endl;
    
    std::cout<<"The value of the STR variable             : "<<str<<std::endl;
    std::cout<<"The value pointed to by stringPTR         : "<<*stringPTR<<std::endl;
    std::cout<<"The value pointed to by stringREF         : "<<stringREF<<std::endl;

}

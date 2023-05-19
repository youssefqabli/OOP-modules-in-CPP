/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 22:09:35 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/05/18 16:42:38 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

void HighValueTest() {
    try {
    std::cout << "--------------------------- High Value Test ----------------------" << std::endl;
        Form obj("paper", 0, 0);
    }
    catch(const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

void LowVlaueTest() {
    try {
    std::cout << "--------------------------- Low Value Test ----------------------" << std::endl;
        Form obj("paper", 190, 190);
    }
    catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

void SignTest() {
    try {
    std::cout << "--------------------------- Successful Signed Test ----------------------" << std::endl;
        Bureaucrat B_obj("youssef", 10);
        Form F_obj("paper",60 ,70);
        B_obj.signForm(F_obj);
        std::cout << F_obj<< std::endl;
        
    }
    catch(const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

void    FailedSignTest() {
    try {
    std::cout << "--------------------------- Failed Signed Test ----------------------" << std::endl;
        Bureaucrat B_obj("youssef", 40);
        Form F_obj("paper", 20, 30);
        F_obj.beSigned(B_obj);
        B_obj.signForm(F_obj);
        std::cout << F_obj << std::endl;
    }
    catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

int main() {
    HighValueTest();
    std::cout << std::endl;    
    LowVlaueTest();
    std::cout << std::endl;    
    SignTest();
    std::cout << std::endl;   
    FailedSignTest(); 
}
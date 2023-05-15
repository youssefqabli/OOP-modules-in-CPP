/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 22:09:35 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/05/11 12:28:27 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

void HighValueTest() {
    try {
    std::cout << "--------------------------- High Value Test ----------------------" << std::endl;
    std::cout << "inputs: \n " << std::endl;
        Form obj("high_test", 0, 0);
    }
    catch(const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

void LowVlaueTest() {
    try {
    std::cout << "--------------------------- Low Value Test ----------------------" << std::endl;
        Form obj("low_test", 190, 190);
    }
    catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

void SignTest() {
    try {
    std::cout << "--------------------------- Successful Signed Test ----------------------" << std::endl;
        Bureaucrat B_obj("B_signed_succes", 10);
        Form F_obj("F_signed_success",60 ,70);
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
        Bureaucrat B_obj("B_sign_fail", 40);
        Form F_obj("F_sign_fail", 20, 30);
        //F_obj.beSigned(B_obj);
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
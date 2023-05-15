/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:47:56 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/05/07 00:23:02 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void    normal_grade() {
    std::cout << "-----------------------test normal case--------------------------------" << std::endl;
    Bureaucrat normal("normal test  ", 100);
    std::cout << "Name: "<< normal.getName()<< std::endl;
    std::cout << "Grade: "<<  normal.getGrade() << std::endl;
    normal.increment(1);
    std::cout << "this is incremented grade (100 - 1) : " << normal.getGrade() <<std::endl;
    normal.decrement(2);
    std::cout << "this is decremented grade 101 + : " << normal.getGrade() << std::endl;
    
}


void    test_high_grade() {
    std::cout << "-----------------------test high grade--------------------------------" << std::endl;
    try {
        Bureaucrat high("high_grade", 0);
    }
    catch (const std::exception &e) {
            std::cout << e.what() << std::endl;
        }
}

void    test_low_grade() {
    std::cout << "-----------------------test low grade--------------------------------" << std::endl;
    try {
        Bureaucrat low("low_grade", 170);
    }
    catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

void    operator_test() {
    std::cout << "-----------------------test operator overload--------------------------------" << std::endl;
    Bureaucrat obj("youssef",15);
    std::cout << obj;
    
}

int main () {
    normal_grade();
    std::cout << std::endl;
    test_high_grade();
    std::cout << std::endl;
    test_low_grade();
    std::cout << std::endl;
    operator_test();
    std::cout << std::endl;
}

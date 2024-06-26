/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 22:09:35 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/05/17 17:55:26 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void    testShrubberyCreation(void) {
    try {
        std::cout << "---------------- Test ShrubberyCreationForm --------------" << std::endl;
        std::cout << std::endl;
        Bureaucrat b1("b1", 25);
        ShrubberyCreationForm shrubbery("shrubbery");
        std::cout << shrubbery << std::endl;
        b1.signForm(shrubbery);
        shrubbery.execute(b1);
        std::cout << std::endl;
    }
    catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }
}

void    testRobotomyRequestForm(void) {
    try {
        std::cout << "--------------- Test RobotomyRequestForm ----------------" << std::endl;
        std::cout << std::endl;
        Bureaucrat b1("b1", 25);
        RobotomyRequestForm robotomy("robotomy");
        robotomy.beSigned(b1);
        std::cout << robotomy << std::endl;
        b1.signForm(robotomy);
        robotomy.execute(b1);
        std::cout << std::endl;
    }
    catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }
}

void    testPresidentialPardonForm(void) {
    try {
        std::cout << "---------------- Test PresidentialPardonForm ------------" << std::endl;
        std::cout << std::endl;
        Bureaucrat b1("b1", 1);
        PresidentialPardonForm presidential("presidential");
        presidential.beSigned(b1);
        std::cout << presidential << std::endl;
        b1.signForm(presidential);
        presidential.execute(b1);
        std::cout << std::endl;
    }
    catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }
}

int main() {
    testShrubberyCreation();        std::cout << std::endl;
    testRobotomyRequestForm();      std::cout << std::endl;
    testPresidentialPardonForm();   std::cout << std::endl;
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 22:09:35 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/05/17 18:21:23 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void    testInternShrubberyCreation(void) {
    try {
        std::cout << "--- Test Intern ShrubberyCreationForm ---" << std::endl;
        std::cout << std::endl;
        Bureaucrat b1("intern", 25);
        Intern intern;
        AForm *form = intern.makeForm("shrubbery creation", "shrubbery");
        b1.signForm(*form);
        b1.executeForm(*form);
        std::cout << std::endl;
    }
    catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }
}

void    testInternRobotomyRequestForm(void) {
    try {
        std::cout << "--- Test Intern RobotomyRequestForm ---" << std::endl;
        std::cout << std::endl;
        Bureaucrat b1("intern", 25);
        Intern intern;
        AForm *form = intern.makeForm("robotomy request", "robotomy");
        b1.signForm(*form);
        b1.executeForm(*form);
        std::cout << std::endl;
    }
    catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }
}

void    testInternPresidentialPardonForm(void) {
    try {
        std::cout << "--- Test Intern PresidentialPardonForm ---" << std::endl;
        std::cout << std::endl;
        Bureaucrat b1("intern", 1);
        Intern intern;
        AForm *form = intern.makeForm("presidential pardon", "robotomy");
        b1.signForm(*form);
        b1.executeForm(*form);
        std::cout << std::endl;
    }
    catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }
}

int main() {
    testInternShrubberyCreation();      std::cout << std::endl;
    testInternRobotomyRequestForm();    std::cout << std::endl;
    testInternPresidentialPardonForm(); std::cout << std::endl;
    return (0);
}
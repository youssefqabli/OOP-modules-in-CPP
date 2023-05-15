/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 23:22:42 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/05/14 23:37:25 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {};
const char *Intern::UnkownFormatException::what() const throw() {
    return "Unkown Form";
}

AForm *Intern::makeForm(const std::string &name, const std::string &target) {
    std::string formNames[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};

for (int i = 0; i < 3; i++) {
    if (name == formNames[i])
    {
        switch (i)
        {
        case 0:
            std::cout << "Intern Create SHrubberyCreationForm" << std::endl;
            return new ShrubberyCreationForm(target);
        case 1:
            std::cout << "Intern Create RobotomyRequestForm" << std::endl;
            return new RobotomyRequestForm(target);
        case 2:
            std::cout << "Intern Create PresidentialPardonForm" << std::endl;
            return new PresidentialPardonForm(target);
        default:
            break;
        }
    }
}
    throw Intern::UnkownFormatException();
    return NULL;
}
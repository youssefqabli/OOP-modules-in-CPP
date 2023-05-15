/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 22:52:59 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/05/14 00:51:41 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>


ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm(target, 145, 137) {};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {};

const char *ShrubberyCreationForm::CanNotOpenOutfile::what() const throw() {
    return "cant open outfile";
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    if (this->getIsSigned() == false)
        throw AForm::NotSignedException();
    if (executor.getGrade() > this->getGradeExecute())
        throw AForm::GradeTooLowException();
	std::ofstream   outfile(this->getName() + "_shrubbery");
    if (outfile.fail())
        throw ShrubberyCreationForm::CanNotOpenOutfile();
    outfile << TREE;
}
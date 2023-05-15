/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:33:48 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/05/07 22:48:09 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name(""), gradeSigned(0), gradeExecute(0) {};

AForm::AForm(const std::string name, const int gradeSigned, const int gradeExecute) : 
    name(name), gradeSigned(gradeSigned), gradeExecute(gradeExecute) {
        if (gradeSigned > 150 || gradeExecute > 150)
            throw GradeTooLowException() ;
        else if (gradeSigned < 1 || gradeExecute  < 1)
            throw GradeTooHighException();
} 

AForm::AForm(const AForm &other) : name(other.getName()), gradeSigned(other.getGradeSigned()), gradeExecute(other.getGradeExecute()) {
    *this = other;
}

AForm &AForm::operator=(const AForm &other) {
    if (this != &other)
        isSigned = other.getIsSigned();
    return *this;
}

AForm::~AForm() {};

const char *AForm::NotSignedException::what(void) const throw() {
    return "Form was not signed!!";
}

const char *AForm::GradeTooLowException::what() const throw() {
    return "Grade Too Low";
}

const char *AForm::GradeTooHighException::what() const throw() {
    return "Grade Too High";
}

const std::string AForm::getName() const {
    return name;
}

bool AForm::getIsSigned() const {
    return isSigned;
}

int AForm::getGradeSigned() const {
    return gradeSigned;
}

int AForm::getGradeExecute() const {
    return gradeExecute;
}

void AForm::beSigned(Bureaucrat bureaucrat) {
    if (bureaucrat.getGrade() > gradeSigned )
        throw GradeTooLowException();
    isSigned = true;
}

std::ostream &operator<<(std::ostream &out, const AForm &AForm) {
    out << "Name: " << AForm.getName() << std::endl;
    out << "GradeSigned: " << AForm.getGradeSigned() << std::endl;
    out << "GradeExecute: " << AForm.getGradeExecute() << std::endl;
    out << "is it Signed? -> ";
    if (AForm.getIsSigned() == true)
        out << "Yes" << std::endl;
    else    
        out << "NO" << std::endl;
    return out;
}
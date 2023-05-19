/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:33:48 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/05/18 19:45:24 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("default"), isSigned(false), gradeSigned(10), gradeExecute(15) {};

Form::Form(const std::string name, const int gradeSigned, const int gradeExecute) : 
    name(name), isSigned(false),gradeSigned(gradeSigned), gradeExecute(gradeExecute) {
        if (gradeSigned > 150 || gradeExecute > 150)
            throw GradeTooLowException() ;
        else if (gradeSigned < 1 || gradeExecute  < 1)
            throw GradeTooHighException();
} 

Form::Form(const Form &other) : 
name(other.getName()), isSigned(other.getIsSigned()), gradeSigned(other.getGradeSigned()), gradeExecute(other.getGradeExecute()) {
    *this = other;
}

Form &Form::operator=(const Form &other) {
    if (this != &other)
        isSigned = other.getIsSigned();
    return *this;
}

Form::~Form() {};



const char *Form::GradeTooLowException::what() const throw() {
    return "Grade Too Low";
}

const char *Form::GradeTooHighException::what() const throw() {
    return "Grade Too High";
}

const std::string Form::getName() const {
    return name;
}

bool Form::getIsSigned() const {
    return isSigned;
}

int Form::getGradeSigned() const {
    return gradeSigned;
}

int Form::getGradeExecute() const {
    return gradeExecute;
}

void Form::beSigned(Bureaucrat bureaucrat) {
    if (bureaucrat.getGrade() > gradeSigned )
        throw GradeTooLowException();
    isSigned = true;
}

std::ostream &operator<<(std::ostream &out, const Form &form) {
    out << "Name: " << form.getName() << std::endl;
    out << "GradeSigned: " << form.getGradeSigned() << std::endl;
    out << "GradeExecute: " << form.getGradeExecute() << std::endl;
    out << "is it Signed? -> ";
    if (form.getIsSigned() == true)
        out << "Yes" << std::endl;
    else    
        out << "NO" << std::endl;
    return out;
}
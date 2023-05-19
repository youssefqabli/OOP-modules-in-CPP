/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 00:32:59 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/05/18 16:49:50 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;


class Form {
    private : 
        const std::string   name;
        bool                isSigned;
        const int           gradeSigned;
        const int           gradeExecute;
    
    public :
        Form();
        Form(const std::string name, const int gradeSigned, const int gradeExecute);
        Form(const Form &other);
        Form &operator=(const Form &other);
        ~Form();
    
    class GradeTooHighException : public std::exception {
        public : 
            const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {
        public : 
            const char *what() const throw();
    };

    const std::string   getName() const;
    bool                getIsSigned() const;
    int                 getGradeSigned() const;
    int                 getGradeExecute() const;
    
    void                beSigned(Bureaucrat bureaucrat);
};

std::ostream &operator<<(std::ostream &out, const Form &Form);

#endif 

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 00:32:59 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/05/10 00:40:23 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;


class AForm {
    protected : 
        const std::string   name;
        bool                isSigned;
        const int           gradeSigned;
        const int           gradeExecute;
    
    public :
        AForm();
        AForm(const std::string name, const int gradeSigned, const int gradeExecute);
        AForm(const AForm &other);
        AForm &operator=(const AForm &other);
        ~AForm();
    
    class GradeTooHighException : public std::exception {
        public : 
            const char *what() const throw();
        };

    class GradeTooLowException : public std::exception {
        public : 
            const char *what() const throw();
        };

    class NotSignedException : public std::exception {
    public:
        const char *what(void) const throw();
    };

    const std::string   getName() const;
    bool                getIsSigned() const;
    int                 getGradeSigned() const;
    int                 getGradeExecute() const;
    
    void                beSigned(Bureaucrat bureaucrat);
    void                signAForm(Bureaucrat bureaucrat);
    virtual void        execute(Bureaucrat const &executor) const = 0;
};

std::ostream &operator<<(std::ostream &out, const AForm &AForm);

#endif 
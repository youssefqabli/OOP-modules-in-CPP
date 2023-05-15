/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:50:36 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/05/16 00:32:58 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"


class AForm;
class Bureaucrat {
    private :
        std::string const name;
        int grade;
    public :
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &other);        
        Bureaucrat &operator=(const Bureaucrat &other);
        ~Bureaucrat();        
        
        class GradeTooHighException : public std::exception {
            public : 
                const char *what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public : 
                const char *what() const throw();
        };

        std::string getName() const;
        int         getGrade() const;
        void        increment(int num);
        void        decrement(int num);
        
        void        signForm(AForm &AForm);
        void        executeForm(AForm const &form);

};
        std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);


#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 01:27:42 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/05/28 00:24:06 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>

class Span {
    private :
        std::vector<int>    vec;
        unsigned int        size;
        
    public : 
        Span();
        Span(unsigned int N);  
        Span(const Span &other);
        Span &operator=(const Span &other);
        ~Span();
        
        void            addNumber(int value);
        void            add_all(std::vector<int>::iterator , std::vector<int>::iterator);
        int             shortestSpan();
        int             longestSpan();

        unsigned int		getsize(void) const;
        std::vector<int>	getVec(void) const;
        
        class AlreadyFullException : public std::exception {
            public :
                const char *what() const throw();
        };
        
        class NoSpanException : public std::exception {
            public :
                const char *what() const throw();
        };

        class InsufficientComponentException : public std::exception {
            public : 
                const char *what() const throw();
        };
        
};

std::ostream &operator<<(std::ostream &out, const Span &span);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 01:27:42 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/05/26 01:54:18 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>

class Span {
    private :
        std::vector<int>    vec;
        unsigned int        N;
        
    public : 
        Span();
        Span(unsigned int N);  
        ~Span();
        Span(const Span &other);
        Span &operator=(const Span &other);
        
        void            addNumber();
        unsigned int    shortestSpan();
        unsigned int    longestSpan();

        void            setN(unsigned int N);
        unsigned int    getN();
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 01:05:32 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/06/01 01:39:17 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {};

RPN::RPN(const RPN &other) : input(other.input), result(other.result){};

RPN &RPN::operator=(const RPN &other) 
{
    if (this == &other)
        return *this;
    this->input = other.input;
    this->result = other.result;
    return *this;    
}


RPN::RPN(std::string arg) : input (arg) {
    if (input.find_first_not_of("+-/* 0123456789") != std::string::npos)
        throw std::range_error("invalid input!");
        
    for (std::string::iterator it = input.begin(); it < input.end(); it++) 
    {
        if (*it == ' ') {
            input.erase(it);
            it--;
        }
    }
    if (input.empty())
        throw std::range_error("empty input");
}

RPN::~RPN() {};

int RPN::calcul() 
{
    std::string::iterator it = input.begin();
    for (;it < input.end(); it++)
    {
        if (isdigit(*it))
            result.push((*it) - '0');
        else 
        {
            if (result.size() < 2)
                throw std::range_error("bad foramt!");
            char c = *it;
            int b = result.top();
            result.pop();
            int a = result.top();
            result.pop();
            
            switch (c)
            {
                case '+':
                    result.push(a + b);
                    break;
                case '-':
                    result.push(a - b);
                    break;
                case '*':
                    result.push(a * b);
                    break;
                case '/':
                    if (!b)
                        throw std::range_error("division by zero!");
                    result.push(a / b);
                    break;
                default:
                    throw std::range_error("bad format!");
            }
        }
    }
    if (result.size() != 1)
        throw std::range_error("bad format unfinished calculation!");
    return(result.top());
}


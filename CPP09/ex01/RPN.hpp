/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 01:06:57 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/06/01 01:11:08 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <cctype>

class RPN {
    private :
        RPN();
        RPN(const RPN &other);
        RPN &operator=(const RPN &other);
        std::string input;
        std::stack<int> result;
    public :
        RPN(std::string input);
        ~RPN();
        int calcul();
};

#endif
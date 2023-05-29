/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 16:41:06 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/05/28 22:28:58 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <vector>

template <typename T >
class MutantStack : public std::stack<T> {
    
  public :

    typedef typename std::stack<T>::container_type::iterator   iterator;
    
    MutantStack() : std::stack<T>() {}
    
    MutantStack(MutantStack const &other) : std::stack<T>(other) {}
    
    MutantStack &operator=(MutantStack const &other) {
        if (this != &other)
            std::stack<T>::operator=(other);
        return *this;
    }
    
    ~MutantStack() {};


    iterator begin() {
        return std::stack<T>::c.begin();
    }

    iterator end() {
        return std::stack<T>::c.end();
    }

};

#endif
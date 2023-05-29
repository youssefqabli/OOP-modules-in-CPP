/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 01:37:31 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/05/28 00:34:48 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : size(0) {};

Span::Span(unsigned int N) : size(N){}


Span::Span(const Span &other) {
    size = other.size;
    vec = other.vec;
}

Span &Span::operator=(const Span &other) {
    if (this != &other)
    {
        size = other.size;
        size = other.size;
    }
    return (*this);
}

Span::~Span() {};


void    Span::addNumber(int value) {
    if (size == 0)
        throw NoSpanException();
    if (vec.size() + 1 > size)
        throw AlreadyFullException();
    vec.push_back(value);
}

void Span::add_all(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    
    if (size == 0)
        throw NoSpanException();
    vec.insert(vec.begin(), begin, end);
}

int Span::shortestSpan() {
    
    if (size == 0)
        throw NoSpanException();
    if (vec.size() < 2)
        throw InsufficientComponentException();

    std::vector<int> vector = vec;
    std::sort(vector.begin(), vector.end()); 
    int span = vector[1] - vector[0];

    for (unsigned int i = 1; i < vector.size() - 1 ; i++ )
    {
        if (vector[i + 1] - vector[i] < span)
           span = vector[i + 1] - vector[i];
    }
    return span;
}

int Span::longestSpan() {

    if (size == 0)
        throw NoSpanException();
    if (vec.size() < 2)
        throw InsufficientComponentException();
    
    return *std::max_element(vec.begin(), vec.end()) - *std::min_element(vec.begin(), vec.end());
}

unsigned int Span::getsize() const  {
    return size;
}
std::vector<int> Span::getVec() const  {
    return vec;
}

const char *Span::NoSpanException::what() const throw() {
    return "Error: NO SPAN!";
}

const char *Span::AlreadyFullException::what() const throw() {
    return "Erro: ALREADY FULL";
}

const char *Span::InsufficientComponentException::what() const throw() {
    return "Error: INSUFFICIENT NUMBER OF COMPONENTS";
}

std::ostream &operator<<(std::ostream &out , const Span &span) {
    std::vector<int> vec = span.getVec();
    std::vector<int>::iterator i;
    
    for (i = vec.begin(); i != vec.end(); i++)
        out << *i << std::endl;
    return out;
}

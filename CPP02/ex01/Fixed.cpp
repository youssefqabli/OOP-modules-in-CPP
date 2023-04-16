/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 03:11:18 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/04/12 01:57:20 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : fixed_num(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::Fixed(const int num) {
    this->fixed_num = (num << this->fract_num);
    std::cout << "Integer constructor called" << std::endl;
}

 Fixed::Fixed(const float num) {
    this->fixed_num = std::roundf(num * (1 << this->fract_num));
    std::cout << "Float constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->fixed_num = other.getRawBits(); 
    return *this;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits () const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixed_num;
}

void Fixed::setRawBits (int const raw) {
    this->fixed_num = raw;
    std::cout << "setRawBits member function called" << std::endl;
}

int Fixed::toInt() const {
    return (this->fixed_num >> this->fract_num);
}

float Fixed::toFloat() const {
    return float(this->fixed_num) / (1 << this->fract_num);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}

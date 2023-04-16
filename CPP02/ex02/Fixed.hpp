/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 01:25:03 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/04/11 03:05:34 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    private :
        int                 fixed_num;
        static const int    fract_num = 8;
    public :
        Fixed ();    
        Fixed (const Fixed &other);    
        Fixed (const int num);
        Fixed (const float num);
        float   toFloat( void ) const;
        int     toInt( void ) const;
        Fixed &operator=(const Fixed &other);
        ~Fixed();
        
        int     getRawBits( void) const;
        void    setRawBits (int const raw);
        
        Fixed   &operator++();
        Fixed   operator++(int);
        Fixed   &operator--();
        Fixed   operator--(int);

        bool    operator<(Fixed const &ref) const;
        bool    operator>(Fixed const &ref) const;
        bool    operator<=(Fixed const &ref) const;
        bool    operator>=(Fixed const &ref) const;
        bool    operator==(Fixed const &ref) const;
        bool    operator!=(Fixed const &ref) const;

        Fixed   operator+(Fixed const &ref) const;
        Fixed   operator-(Fixed const &ref) const;
        Fixed   operator*(Fixed const &ref) const;
        Fixed   operator/(Fixed const &ref) const;
        
        static Fixed &max(Fixed &ref1, Fixed &ref2);
        static const Fixed &max(Fixed const &ref1, Fixed const &ref2);
        static Fixed &min(Fixed &ref1, Fixed &ref2);
        static const Fixed &min(Fixed const &ref1, Fixed const &ref2);
        
};
        std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif


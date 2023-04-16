/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 01:25:03 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/04/09 02:28:09 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

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
};
        std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
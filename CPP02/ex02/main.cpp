/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:14:14 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/04/12 00:14:48 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
    // Fixed a;
    // Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    // std::cout << a << std::endl;
    // std::cout << ++a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    // std::cout << Fixed::max( a, b ) << std::endl;
    // return 0;




    #include "Fixed.hpp"
#include <iostream>

    Fixed a(2.5f);
    Fixed b(5.5f);

    // Test pre-increment operator ++
    std::cout << "Testing pre-increment operator ++" << std::endl;
    std::cout << "Before increment: a = " << a << std::endl;
    Fixed& result1 = ++a;
    std::cout << "After increment: a = " << a << ", result = " << result1 << std::endl;
    std::cout << std::endl;

    // Test post-increment operator ++
    std::cout << "Testing post-increment operator ++" << std::endl;
    std::cout << "Before increment: b = " << b << std::endl;
    Fixed result2 = b++;
    std::cout << "After increment: b = " << b << ", result = " << result2 << std::endl;
    std::cout << std::endl;

    // Test pre-decrement operator --
    std::cout << "Testing pre-decrement operator --" << std::endl;
    std::cout << "Before decrement: a = " << a << std::endl;
    Fixed& result3 = --a;
    std::cout << "After decrement: a = " << a << ", result = " << result3 << std::endl;
    std::cout << std::endl;

    // Test post-decrement operator --
    std::cout << "Testing post-decrement operator --" << std::endl;
    std::cout << "Before decrement: b = " << b << std::endl;
    Fixed result4 = b--;
    std::cout << "After decrement: b = " << b << ", result = " << result4 << std::endl;
    std::cout << std::endl;

    // Test less than operator <
    std::cout << "Testing less than operator <" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    bool result5 = (a < b);
    std::cout << "a < b = " << result5 << std::endl;
    std::cout << std::endl;

    // Test greater than operator >
    std::cout << "Testing greater than operator >" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    bool result6 = (a > b);
    std::cout << "a > b = " << result6 << std::endl;
    std::cout << std::endl;

    // Test less than or equal to operator <=
    std::cout << "Testing less than or equal to operator <=" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    bool result7 = (a <= b);
    std::cout << "a <= b = " << result7 << std::endl;
    std::cout << std::endl;

    // Test greater than or equal to operator >=
    std::cout << "Testing greater than or equal to operator >=" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    bool result8 = (a >= b);
    std::cout << "a >= b = " << result8 << std::endl;
    std::cout << std::endl;

    // Test equality

}
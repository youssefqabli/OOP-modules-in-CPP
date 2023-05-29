/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 01:27:33 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/05/28 00:47:52 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main () {
        std::cout << std::endl;;
    std::cout << "----------------- test from the subject  ------------------" <<std::endl;

    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    
    std::cout << "----------------- test with teh size of [5]  ------------------" <<std::endl;
        std::cout << std::endl;;
    try {
        Span obj(5);
        
        obj.addNumber(6);
        obj.addNumber(3);
        obj.addNumber(17);
        obj.addNumber(9);
        obj.addNumber(11);
        std::cout << "the input: 6 , 3 , 17 , 9 , 11" << std::endl;;
        std::cout << std::endl;;
        std::cout << "the shortest span :" << obj.shortestSpan() << std::endl; 
        std::cout << "the longest span: " << obj.longestSpan() << std::endl; 
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;    
    }

        std::cout << std::endl;;
    std::cout << "----------------- test with size of [10 000] with random value ------------------" <<std::endl;
        std::cout << std::endl;;
    
    try {
        Span    obj(10000);
        
        std::srand(time(NULL));
        for (int i = 0; i < 10000; i++) {
            obj.addNumber(rand());
        }    
            
        std::cout << "the shortest span:" << obj.shortestSpan() << std::endl; 
        std::cout << "the longest span: " << obj.longestSpan() << std::endl; 
        obj.addNumber(rand());

    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    
        std::cout << std::endl;;
    std::cout << "----------------- test with size of [100 000] with random value ------------------" <<std::endl;
        std::cout << std::endl;;
    
    try {
        
        Span obj(100000);
        std::vector<int> vec(100000);

        std::srand(time(NULL));
        std::generate(vec.begin(), vec.end(), std::rand);
        obj.add_all(vec.begin(), vec.end());
        
        
        std::cout << "the shortest span:" << obj.shortestSpan() << std::endl; 
        std::cout << "the longest span: " << obj.longestSpan() << std::endl;         
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

        std::cout << std::endl;;
    std::cout << "----------------- test with size of [0]  ------------------" <<std::endl;
        std::cout << std::endl;;

    try { 
        Span obj(0);
        
        std::cout << obj.shortestSpan() << std::endl;
        obj.addNumber(100);
    }
    catch (std::exception &e) {
        std::cout << e.what() <<  std::endl;
    }

}
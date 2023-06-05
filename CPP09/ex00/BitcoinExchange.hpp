/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 01:27:02 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/06/01 18:06:27 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <cstring>
#include <iostream>
#include <fstream>
#include <iterator>
#include <sstream>
#include <ctime>
#include <ctype.h>
#include <ctype.h>
#include <limits.h>



class BitcoinExchange {
    private :
        std::map<std::string, float>    Dictionary;
        char                            *filepath;
        
    public :
        BitcoinExchange();
        BitcoinExchange(char *file_path);
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &other);
        BitcoinExchange &operator=(const BitcoinExchange &other);
        
        void    printResult();
        
        
};

#endif
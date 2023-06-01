/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 19:55:00 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/05/31 23:22:47 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {};

BitcoinExchange::BitcoinExchange(char *path) {
    
    char    buffer[1024];
    
    if (strcmp(path, "input.txt") != 0)
    {
        std::cerr << "invalide input file" << std::endl;
        exit (1);
    }
    
    filepath = path;
    
    std::ifstream database("data.csv");
    if (!database) {
        std::cerr << "database file could not be opened!" << std::endl;
        exit(1);
    }
    while ( database.getline(buffer, 1024))
    {
        const char *dateDic = strtok(buffer , ",");
        const char *exchangeRate = strtok(NULL, ",");
        Dictionary[std::string(dateDic)] = std::atof(exchangeRate);
    }
    
};

BitcoinExchange::~BitcoinExchange() {};

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other ) {
    *this = other;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other) {
    if (this != &other)
    {
        this->Dictionary = other.Dictionary;
        this->filepath = other.filepath;
    }
    return *this;
}

void    BitcoinExchange::printDictionary() {
    std::map <std::string, float>::iterator iter;
    for (iter = this->Dictionary.begin(); iter != this->Dictionary.end(); ++iter) {
        std::cout << iter->first << " : " <<iter->second << std::endl;
    }
    
    std::cout << "size of conatiner: " << Dictionary.size() << std::endl;
}

void    BitcoinExchange::printResult() {
    char            buffer[1024];
    std::string     dateString;
    std::string     digitString;
    struct          tm time;

    std::fstream input(this->filepath);
    input.getline(buffer, 1024);
    
    if (strcmp(buffer, "date | value") != 0)
    {
        std::cerr << "invalid column nmaing" << buffer <<std::endl;
        exit(1);
    }
    
    while (input.getline(buffer,1024)) 
    {
        std::string buff(buffer);
        
        int count = 0;
        for (std::size_t i = 0; i < buff.size(); i++) 
        {
            if (buff[i] == '|')
                count += 1;
            if (count > 1)
            {
                std::cout << "there is more than one pipe: " << buff <<  std::endl;
                count = 0;
                continue;
            }
        }
        
/**************************************************/
        
        // std::cout << buff << std::endl;
        // std::string c  = "012345679.|-";

        //  for (std::size_t i = 0; i < buff.length(); i++) 
        //  {
        //     for (std::size_t j = 0; j < c.length(); j++) 
        //     {
        //         if (buff[i] == c[j])
        //         {
        //         }
        //             break;
        //     }
        //     break;
        //  }
        
/****************************************************/
        
        if (buff.find("|") == std::string::npos) { 
            std::cout << "invalid input: " << buff <<std::endl;
            continue;
        }
        
        else if (buff.find_first_not_of("|") == std::string::npos) {
            std::cout << "Bad input: " << buff << std::endl;
            continue;
        }
        
        else {
            char *Date = strtok(buffer, "|");
            dateString = Date;
            
            char *charDigit = strtok(NULL, "|");
            digitString = charDigit;

            if (charDigit == NULL || Date == NULL)
            {
                std::cout << "Error: invlaid input: " << Date << std::endl;
                continue;
            }
        }
                
        std::string     Date;
        float           Digit;
        
        std::stringstream   s_date;
        std::stringstream   s_digit;

        s_date << dateString;
        s_date >> Date;

        s_digit << digitString;
        s_digit >> Digit;
        
        if (s_digit.fail() == true)
        {
            std::cout << "invalid value format " << buff << std::endl;
            continue;
        }

        if (!strptime(&Date[0], "%Y-%m-%d", &time)) {
        }
        if (signbit(Digit) == true) {
            std::cout << "Error: a negative input! " << std::endl;
            continue;
        }
        if (Digit > 1000) {
            std::cout << "Error a alarge input!" << std::endl;
            continue;
        }

        std::map <std::string, float>::iterator itr;

        itr = this->Dictionary.find(Date);

        if (itr == this->Dictionary.end()) {
            itr = this->Dictionary.lower_bound(Date);
            if (itr != Dictionary.begin())
                itr--;
        }
        
        float output = (*itr).second * Digit;
        std::cout << Date << " => " << Digit << " = " << output << std::endl;
        
    }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 02:24:57 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/04/05 02:23:34 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string filename, std::string s1, std::string s2) : 
    filename(filename), s1(s1), s2(s2) {}
Replace::~Replace() {
    ;
}

void    Replace::replace() {
    size_t          i;
    std::ifstream   input(this->filename);
    std::ofstream   output;
    std::string     line;
    std::string     result;
    
    if (!input.is_open())
    {
        std::cout<< "Error While Opening File !" << std::endl;
        return;
    }
    if (!s1.length())
    {
        std::cout<<" Error in Replace Input" << std::endl;
        input.close();
        return;
    }
    while (getline(input, line))
    {
        i = line.find(s1);
        while (i != std::string::npos)
        {
            line.erase(i, s1.length());
            line.insert(i, s2);
            i = line.find(s1);
        }
        result.append(line);
        result.append("\n");
    }
    output.open(filename.append(".replace"), std::ios::out);
    if(output.fail())
    {
        std::cout << " Error While Opening Output File !" << std::endl;
        input.close();
        return;
    }
    output << result;
    input.close();
    output.close();
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 21:42:15 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/03/14 01:16:04 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
#include <iostream>
#include <string>

int is_input_empty(std::string input)
{
    if (input.empty())
        return(1);
    return(0);
}

std::string  cutting(std::string str)
{
    std::string strTmp;
    if (str.length() < 10)
    {
        for (size_t i =str.length(); i < 9; i++)strTmp += " ";
        str = str + strTmp.append(" ");
           
    }
        
    else 
        return (str.substr(0, 9) + ".");
    return str;
}

void PhoneBook::search()
{
    std::string choice;
    int choice_num;
    
    if (index == 0)
        std::cout<<"OOPS THERE NO SAVED CONTACT YET !!"<<std::endl;
    else
    {

        std::cout<<"|"<<std::setw(10)<<"Index";
        std::cout<<"|"<<std::setw(10)<<"First Name";
        std::cout<<"|"<<std::setw(10)<<"Last Name";
        std::cout<<"|"<<std::setw(10)<<"Nick Name"<<"|"<<std::endl;
        std::cout<<"----------------------------------------"<<std::endl;\
        
        for (int i = 0; i < currentIndex; i++)
        {
            std::cout<<"|"<<std::setw(10)<<i+1<<"|";
            std::cout<<cutting(contacts[i].get_first_name())<<"|";
            std::cout<<std::setw(10)<<cutting(contacts[i].get_last_name())<<"|";
            std::cout<<std::setw(10)<<cutting(contacts[i].get_nick_name())<<"|";
            std::cout<<std::endl;
        }
        
        std::cout<<"----------------------------------------"<<std::endl;
        std::cout<<std::endl;
        std::cout<<"make a choice by entering a number from 1 ==> 8 ";
        getline(std::cin, choice);
        if(choice.empty())
        {
            std::cout << "No Input !!"<< std::endl;
            return;
        }
        choice_num = atoi(choice.c_str());
        
        if (choice_num < 1 || choice_num  > 8 )
        {
            std::cout<<"Wrong input !!"<<std::endl;
        }
        else 
        {
            if (choice_num > index )
            {
                std::cout << "noy found contact " << std::endl;
                return ;
            }
            std::cout<<"FIRST NAME : "<<contacts[choice_num - 1].get_first_name()<<std::endl;
            std::cout<<"LAST NAME : "<<contacts[choice_num - 1].get_last_name()<<std::endl;
            std::cout<<"NICKNAME : "<<contacts[choice_num - 1].get_nick_name()<<std::endl;
            std::cout<<"PHONE NUMBER : "<<contacts[choice_num - 1].get_phone_number()<<std::endl;
            std::cout<<"DARKEST SECRET : "<<contacts[choice_num - 1].get_darkest_secret()<<std::endl;
        }
            
    }
}

void PhoneBook::set_contact()
{
    std::string info;
    
    std::cout<<"enter contact's first name"<<std::endl;
    getline(std::cin, info);
    if (std::cin.eof())
        std::exit(0);
    if (info.empty()){
            std::cout<<"yous musdt enter a value for name !!"<<std::endl;
            return;
        }
    contacts[get_index() % 8].set_first_name(info);
    
    std::cout<<"enter contact's last name"<<std::endl;
    getline(std::cin, info);
        if (info.empty()){
            std::cout<<"yous musdt enter a value for name !!"<<std::endl;
            return;
        }
    contacts[get_index() % 8].set_last_name(info);
    
    std::cout<<"enter contact's nickname"<<std::endl;
    getline(std::cin, info);
        if (info.empty()){
            std::cout<<"yous musdt enter a value for name !!"<<std::endl;
            return;
        }
    contacts[get_index() % 8].set_nick_name(info);
    
    std::cout<<"enter contact's phone number"<<std::endl;
    getline(std::cin, info);
        if (info.empty()){
            std::cout<<"yous musdt enter a value for name !!"<<std::endl;
            return;
        }
    contacts[get_index() % 8].set_phone_number(info);
    
    std::cout<<"enter contact's darkest secret"<<std::endl;
    getline(std::cin, info);
        if (info.empty()){
            std::cout<<"yous musdt enter a value for name !!"<<std::endl;
            return;
        }
    contacts[get_index() % 8].set_darkest_secret(info);

}

int main ()
{
    PhoneBook obj;
    std::string str;

        while (true)
        {
            std::cout<<"eneter a command : 'ADD' , 'SEARCH' or 'EXIT' "<<std::endl;
            getline(std::cin, str);
            if (std::cin.eof())
                exit(0);
            if (str == "ADD")
            {
                obj.set_contact();
                obj.index_increament();
            }
            else if (str == "SEARCH")
            {
                obj.search();
            }
            else if ( str == "EXIT")
            {
                exit(0);
            }
        }   
}
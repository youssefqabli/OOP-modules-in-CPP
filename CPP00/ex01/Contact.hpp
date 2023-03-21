/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:10:37 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/03/13 20:39:33 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact {
    private :
    std::string  first_name;
    std::string  last_name;
    std::string  nick_name;
    std::string  phone_number;
    std::string darkest_secret;
    
    public : 
    
    void set_first_name(std::string str)
    {
       first_name = str;
    }
    
    void set_last_name(std::string str)
    {
        last_name = str;
    }
    void set_nick_name(std::string str)
    {
        nick_name = str;
    }
    void set_phone_number(std::string num)
    {
        phone_number = num;
    }
    void set_darkest_secret(std::string str)
    {
        darkest_secret = str;
    }

    std::string get_first_name()
    {
        return(first_name);
    }
    std::string get_last_name()
    {
        return(last_name);
    }
    std::string get_nick_name()
    {
        return(nick_name);    
    }
    std::string get_phone_number()
    {
        return(phone_number);
    }
    std::string get_darkest_secret()
    {
        return(darkest_secret);
    }
};

#endif
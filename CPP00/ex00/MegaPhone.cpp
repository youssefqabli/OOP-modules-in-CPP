/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MegaPhone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:01:24 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/03/13 20:57:47 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

class MegaPhone {
   public : 
    char upper(char input)
    {
        char output;
        output = toupper(input);
        
        return(output);
    }
    string message()
    {
        string text = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        return(text);
    }
} ;

int main (int ac, char **av)
{
    int i = 1;
    int j = 0;
    MegaPhone m;

    if (ac > 1)
    {
        while (av[i])
        {
            j = 0;
            while (av[i][j])
            {
                std::cout<<m.upper(av[i][j]);
                j++;
            }
            i++;
        }
    }
    if (ac == 1)
    {
        std::cout<<m.message();
    }
    std::cout<<endl;
    return (0);
}
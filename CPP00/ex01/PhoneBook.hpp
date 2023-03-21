/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 22:21:40 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/03/13 21:15:59 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"


class PhoneBook {
    private :
        Contact contacts[8];
        int index;
        int currentIndex;

    public :
        PhoneBook() {
            index = 0;
            currentIndex = 0;
        };
        void add_contact();
        void search();
        void exit();
        void set_contact();
        void index_increament()
        {
            index++;
            if (index <= 8 && currentIndex != 8)
                currentIndex++;
        }
        int get_index()
        {
            return(index);
        }
};

#endif 
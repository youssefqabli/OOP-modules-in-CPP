/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 19:11:42 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/05/21 20:13:07 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

typedef struct test_data {
    int     value;
} Data;

class Serializer {
  public : 
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);  
};

#endif

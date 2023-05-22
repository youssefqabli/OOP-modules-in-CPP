/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:06:14 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/05/21 22:00:25 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main () {
  Data *test = new Data;
  Data *tmp;
  test->value = 199;
  std::cout << "the original value of the int: " << test->value << std::endl;
  std::cout <<  std::endl;

  uintptr_t data = Serializer::serialize(test);
  std::cout << "the value of the int after convert to uintptr_t: " << test->value << std::endl;
  std::cout <<  std::endl;
  
  tmp = Serializer::deserialize(data);
  std::cout << "the value of the int after convert to pointer to Data: " << test->value << std::endl;
  std::cout <<  std::endl;
}

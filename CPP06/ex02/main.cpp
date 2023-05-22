/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:06:14 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/05/22 01:46:30 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void) {
  int random;
  
  random = rand() % 3;
  if (random == 0){
    std::cout << "creating A" << std::endl;
    return (new A);
  }
  else if (random == 1) {
    std::cout << "creating B" << std::endl;
    return (new B);
  }
  else if (random == 2) {
    std::cout << "creating c" << std::endl;
    return (new C);
  }
  else 
    return NULL;
}

void identify(Base* p) {
  if (dynamic_cast<A*>(p) != NULL)
    std::cout << "A" << std::endl;
  else if (dynamic_cast<B*>(p) != NULL)
    std::cout << "A" << std::endl;
  else if (dynamic_cast<C*>(p) != NULL)
    std::cout << "A" << std::endl;
}

int main () {
  Base *base;

  srand(time(NULL));

  base = generate();
  std::cout << "p:";
  identify(base);
}

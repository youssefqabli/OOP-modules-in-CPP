/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:06:14 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/05/22 22:08:07 by yel-qabl         ###   ########.fr       */
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
    std::cout << "B" << std::endl;
  else if (dynamic_cast<C*>(p) != NULL)
    std::cout << "C" << std::endl;
}

void    identify(Base &p) {
  Base ptr;
  
  try {
    ptr = dynamic_cast<A&>(p);
    std::cout << "A" << std::endl;
  }
  catch (std::exception &e) {}
  
  try {
    ptr = dynamic_cast<B&>(p);
    std::cout << "B" << std::endl;
  }
  catch (std::exception &e) {}

  try {
    ptr = dynamic_cast<C&>(p);
    std::cout << "C" << std::endl;
  }
  catch (std::exception &e) {}
}

int main () {
  Base *base;

  srand(time(NULL));

  base = generate();
  std::cout << "p:";
  identify(base);
  delete base;
  
  base = generate();
  std::cout << "p:";
  identify(*base);
  delete base;
}

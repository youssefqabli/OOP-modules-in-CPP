/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 01:34:26 by yel-qabl          #+#    #+#             */
/*   Updated: 2023/05/24 22:56:47 by yel-qabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	int		intArray[5] = {13, 99, -28, 42, 63};
	float	fltArray[5] = {1.2f, 18.5f, -5.7f, 6.7f, 2.2f};

	std::cout << "test  INT :" << std::endl;
	iter(intArray, 5, print);
	std::cout << "\ntest FLOAT : " << std::endl;
	iter(fltArray, 5, print);
	return 0;
}

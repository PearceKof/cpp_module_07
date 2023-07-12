/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:17:19 by blaurent          #+#    #+#             */
/*   Updated: 2023/07/12 15:26:27 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int tabInt[] = {2, 100, 25};
	char tabChar[] = "abcde";
	float tabFloat[] = {2.5, 10.8};
	double tabDouble[] = {4.258, 8.8, 0, 5};

	std::cout << "---test with int---" << std::endl;
	printTabValues(tabInt, 3);
	iter(tabInt, 3, &divideByTwo);
	printTabValues(tabInt, 3);

	std::cout << "---test with char---" << std::endl;
	printTabValues(tabChar, 5);
	iter(tabChar, 5, &divideByTwo);
	printTabValues(tabChar, 5);

	std::cout << "---test with float---" << std::endl;
	printTabValues(tabFloat, 2);
	iter(tabFloat, 2, &divideByTwo);
	printTabValues(tabFloat, 2);

	std::cout << "---test with double---" << std::endl;
	printTabValues(tabDouble, 4);
	iter(tabDouble, 4, &divideByTwo);
	printTabValues(tabDouble, 4);
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:17:19 by blaurent          #+#    #+#             */
/*   Updated: 2023/08/14 13:14:02 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	std::cout << "\n---test with int---\n" << std::endl;

	int tabInt[] = {2, 100, 25};

	printTabValues(tabInt, 3);
	iter(tabInt, 3, &divideByTwo);
	printTabValues(tabInt, 3);

	std::cout << "\n---test with char---\n" << std::endl;

	char tabChar[] = "abcde";

	printTabValues(tabChar, 5);
	iter(tabChar, 5, &divideByTwo);
	printTabValues(tabChar, 5);

	std::cout << "\n---test with float---\n" << std::endl;

	float tabFloat[] = {2.5, 10.8};

	printTabValues(tabFloat, 2);
	iter(tabFloat, 2, &divideByTwo);
	printTabValues(tabFloat, 2);

	std::cout << "\n---test with double---\n" << std::endl;

	double tabDouble[] = {4.258, 8.8, 0, 5};

	printTabValues(tabDouble, 4);
	iter(tabDouble, 4, &divideByTwo);
	printTabValues(tabDouble, 4);

	return 0;
}
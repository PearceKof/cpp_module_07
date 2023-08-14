/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:12:29 by blaurent          #+#    #+#             */
/*   Updated: 2023/08/14 13:13:42 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void printTabValues(T tab[], size_t size)
{
	if (tab == NULL)
		return ;
	std::cout << "| ";
	for (size_t i(0) ; i < size ; i++)
	{
		std::cout << tab[i] << " | ";
	}
	std::cout << std::endl;
}

template<typename T>
void divideByTwo(T& nbr)
{
	nbr /= 2;
}

template<typename T>
void iter(T tab[], size_t size, void (*f)(T&))
{
	if (tab == NULL)
		return ;
	for (size_t i(0) ; i < size ; i++)
		f(tab[i]);
}

#endif
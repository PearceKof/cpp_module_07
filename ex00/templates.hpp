/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:04:44 by blaurent          #+#    #+#             */
/*   Updated: 2023/08/14 13:03:51 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

template<typename T>
void swap(T& a, T& b)
{
	T c(a);

	a = b;
	b = c;
}

template<typename T>
T min(T& a, T& b)
{
	if (a < b)
		return a;
	else
		return b;
}

template<typename T>
T max(T& a, T& b)
{
	if (a > b)
		return a;
	else
		return b;
}

#endif
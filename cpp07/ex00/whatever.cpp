/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 10:46:36 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/28 12:00:02 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void	swap(T &a, T &b)
{
	T swap;

	swap = a;
	a = b;
	b = swap;
}

template <typename T>
T	min(T const &a, T const &b)
{
	if (a >= b)
		return b;
	return a;
}

template <typename T>
T	max(T const &a, T const &b)
{
	if (a <= b)
		return b;
	return a;	
}
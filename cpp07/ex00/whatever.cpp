/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 10:46:36 by jereligi          #+#    #+#             */
/*   Updated: 2020/11/21 16:42:01 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void	swap(T &a, T &b)
{
	T swap = a;
	
	a = b;
	b = swap;
}

template <typename T>
T	min(T &a, T &b)
{
	if (a >= b)
		return b;
	return a;
}

template <typename T>
T	max(T &a, T &b)
{
	if (a <= b)
		return b;
	return a;	
}
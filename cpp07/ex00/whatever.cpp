/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 10:46:36 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/28 11:23:39 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename type>
void	swap(type &a, type &b)
{
	type swap;

	swap = a;
	a = b;
	b = swap;
}

template <typename type>
type	min(type const &a, type const &b)
{
	if (a >= b)
		return b;
	return a;
}

template <typename type>
type	max(type const &a, type const &b)
{
	if (a <= b)
		return b;
	return a;	
}
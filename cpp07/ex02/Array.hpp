/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 12:07:08 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/28 14:54:21 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class	Array
{
public:

	Array(void);
	Array(unsigned int n);
	Array(Array const &src);
	Array &operator=(Array const &src);
	T &operator[](unsigned int n) const;
	virtual ~Array();

	unsigned int	getSize(void) const;

private:
	T				*tab;
	unsigned int	n;
};

#endif
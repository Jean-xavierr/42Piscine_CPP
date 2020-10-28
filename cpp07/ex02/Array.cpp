/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 12:15:31 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/28 17:08:40 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void) : tab(NULL), n(0)
{
	return ;
}

template <typename T>
Array<T>::Array(unsigned int n) : tab(new T(n)), n(n)
{
	return ;
}

template <typename T>
Array<T>::Array(Array const &src)
{
	T	*tmp = new T(src.getSize());

	for (unsigned int i = 0; i < src.getSize(); i++)
		tmp[i] = src.tab[i];
	tab = tmp;
	this->n = src.getSize();
}

template <typename T>
Array<T>::~Array(void)
{
	if (this->tab)
		delete this->tab;
	return ;
}

template <typename T>
Array<T>	&Array<T>::operator=(Array const &src)
{
	T	*tmp = new T(src.getSize());

	for (unsigned int i = 0; i < src.getSize(); i++)
		tmp[i] = src.tab[i];
	delete this->tab;
	tab = tmp;
	this->n = src.getSize();
	return *this;
}

template <typename T>
T  	&Array<T>::operator[](unsigned int n) const
{
	if (n < 0 || n >= this->n || !this->tab)
		throw std::exception();
	return this->tab[n];
}

template <typename T>
unsigned int	Array<T>::getSize(void) const
{
	return this->n;
}

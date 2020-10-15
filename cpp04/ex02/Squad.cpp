/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 11:57:13 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/15 15:28:25 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

/*
**	Part of Constructor / Destructor
*/

Squad::Squad(void) : count(0), units(NULL)
{
	return ;
}

Squad::Squad(Squad const &src)
{
	*this = src;
}

Squad::~Squad(void)
{
	if (this->units)
	{
		for (int i = 0; i < this->count; i++)
			delete this->units[i];
		delete this->units;
	}
	return ;
}

Squad	&Squad::operator=(Squad const &src)
{
	if (this->units)
	{
		for (int i = 0; i < this->count; i++)
		{
			delete this->units[i];
		}
		delete this->units;
		this->units = NULL;
	}
	this->count = src.count;
	if (src.units)
	{
		this->units = new ISpaceMarine*[src.count];
		for (int i = 0; i < src.count; i++)
			this->units[i] = src.units[i];
	}
	return (*this);
}

/*
**	Part of member functions
*/

int				Squad::getCount() const
{
	return this->count;
}

ISpaceMarine	*Squad::getUnit(int n) const
{
	if (n < 0 || n >= this->count)
		return (NULL);
	return this->units[n];
}

int				Squad::push(ISpaceMarine *unit)
{
	if (unit == NULL)
		return 0;
	else if (this->count == 0)
	{
		this->units = new ISpaceMarine*[1];
		this->units[0] = unit;
		this->count = 1;
	}
	else
	{
		for (int i = 0; i < this->count; i++)
			if (this->units[i] == unit)
				return this->count;
		ISpaceMarine	**newUnits = new ISpaceMarine*[this->count + 1];
		for (int i = 0; i < this->count; i++)
			newUnits[i] = this->units[i];
		delete this->units;
		newUnits[this->count] = unit;
		this->units = newUnits;
		this->count++;
	}
	return this->count;
}
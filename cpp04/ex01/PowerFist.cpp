/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 12:17:52 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/14 15:32:42 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{
	return ;
}

PowerFist::PowerFist(PowerFist const &src)
{
	*this = src;
}

PowerFist::~PowerFist(void)
{
	return ;
}

PowerFist	&PowerFist::operator=(PowerFist const &src)
{
	this->name = src.name;
	this->damage = src.damage;
	this->apcost = src.apcost;
	return (*this);
}

void		PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM ! *" << std::endl;
}
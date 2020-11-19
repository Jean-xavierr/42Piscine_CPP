/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 12:17:52 by jereligi          #+#    #+#             */
/*   Updated: 2020/11/19 12:10:23 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{
	return ;
}

PowerFist::PowerFist(PowerFist const &src) : AWeapon(src)
{
	return ;
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
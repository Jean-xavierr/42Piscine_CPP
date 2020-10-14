/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 11:54:36 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/14 12:16:25 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void)
{
	return ;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : name(name),
apcost(apcost), damage(damage)
{
	return ;
}

AWeapon::AWeapon(AWeapon const &src)
{
	*this = src;
}

AWeapon::~AWeapon(void)
{
	return ;
}

AWeapon	&AWeapon::operator=(AWeapon const &src)
{
	this->name = src.name;
	this->damage = src.damage;
	this->apcost = src.apcost;
	return (*this);
}

std::string const AWeapon::getName() const
{
	std::stringstream value;

	value << this->name;
	return value.str();
}

int AWeapon::getAPCost() const
{
	int	value;

	value = this->apcost;
	return value;
}

int AWeapon::getDamage() const
{
	int	value;

	value = this->damage;
	return value;
}

std::string		AWeapon::getValues(void) const
{
	std::stringstream	values;

	values << "Name : " << this->getName() << std::endl;
	values << "Damage : " << this->getDamage() << std::endl;
	values << "AP cost : " << this->getAPCost();

	return values.str();
}

std::ostream	&operator<<(std::ostream &o, AWeapon const &i)
{
	o << i.getValues();
	return o;
}
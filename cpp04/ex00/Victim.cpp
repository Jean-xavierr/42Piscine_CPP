/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 18:20:13 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/13 18:52:14 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void)
{
	return ;
}

Victim::Victim(std::string name) : name(name)
{
	std::cout << "A random victim called " << this->name << " just appeared!" \
	<< std::endl;
	return ;
}

Victim::Victim(Victim const &src)
{
	*this = src;
}

Victim::~Victim(void)
{
	std::cout << "The victim "  << this->name << " died for no apparent reasons!" \
	<< std::endl;
	return ;
}

Victim	&Victim::operator=(Victim const &src)
{
	this->name = src.name;
	return (*this);
}

std::string		Victim::getName(void) const
{
	std::stringstream value;

	value << this->name;
	return value.str();
}

void			Victim::getPolymorphed(void) const
{
	std::cout << this->name << " was just polymorphed in a cute little sheep!" << std::endl;
}

std::ostream	&operator<<(std::ostream &o, Victim const &i)
{
	o << "I'm " << i.getName() << " and I like otters!" << std::endl;
	return o;
}
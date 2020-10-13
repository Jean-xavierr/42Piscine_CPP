/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 18:37:12 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/13 18:52:21 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void)
{
	return ;
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon::Peon(Peon const &src)
{
	*this = src;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
	return ;
}

Peon	&Peon::operator=(Peon const &src)
{
	this->name = src.name;
	return (*this);
}

std::string		Peon::getName(void) const
{
	std::stringstream value;

	value << this->name;
	return value.str();
}

void			Peon::getPolymorphed(void) const
{
	std::cout << this->name << " was just polymorphed into a pink pony!" << std::endl;
}

std::ostream	&operator<<(std::ostream &o, Peon const &i)
{
	o << "I'm " << i.getName() << " and I like otters!" << std::endl;
	return o;
}
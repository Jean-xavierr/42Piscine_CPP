/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 18:37:12 by jereligi          #+#    #+#             */
/*   Updated: 2020/11/19 12:07:58 by Jeanxavier       ###   ########.fr       */
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

Peon::Peon(Peon const &src) : Victim(src)
{
	std::cout << "Zog zog." << std::endl;
	return ;
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
	return this->name;
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
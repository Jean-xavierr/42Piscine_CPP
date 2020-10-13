/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 17:47:29 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/13 18:52:06 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{
	return ;
}

Sorcerer::Sorcerer(std::string name, std::string title) : name(name), title(title)
{
	std::cout << this->name << ", " << this->title << ", is born !" << std::endl;
	return ;
}

Sorcerer::Sorcerer(Sorcerer const &src)
{
	*this = src;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->name << ", " << this->title << ", is dead. Consequences" \
	<< " will never be the same!" << std::endl;
	return ;
}

Sorcerer	&Sorcerer::operator=(Sorcerer const &src)
{
	this->name = src.name;
	this->title = src.title;
	return (*this);
}

std::string		Sorcerer::getName(void) const
{
	std::stringstream	value;

	value << this->name;
	return value.str();
}

std::string		Sorcerer::getTitle(void) const
{
	std::stringstream	value;

	value << this->title;
	return value.str();
}

void			Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
	return ;
}

std::ostream	&operator<<(std::ostream &o, Sorcerer const &i)
{
	o << "I am " << i.getName() << ", " << i.getTitle() << ", " << "and i like ponies!" \
	<< std::endl;
	return o;
}
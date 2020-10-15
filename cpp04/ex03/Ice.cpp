/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 17:17:20 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/15 18:19:12 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	return ;
}

Ice::Ice(Ice const &src) : AMateria("ice")
{
	*this = src;
}

Ice::~Ice(void)
{
	return ;
}

Ice	&Ice::operator=(Ice const &src)
{
	this->type = src.type;
	this->xp = src.xp;
	return (*this);
}

AMateria	*Ice::clone() const
{
	Ice		*clone = new Ice(*this);
	return clone;
}

void 		Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

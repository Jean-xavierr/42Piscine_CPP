/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 17:23:19 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/15 18:21:54 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	return ;
}

Cure::Cure(Cure const &src) : AMateria("cure")
{
	*this = src;
}

Cure::~Cure(void)
{
	return ;
}

Cure	&Cure::operator=(Cure const &src)
{
	this->type = src.type;
	this->xp = src.xp;
	return (*this);
}

AMateria	*Cure::clone() const
{
	Cure	*clone = new Cure(*this);
	return clone;
}

void 		Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << " ’s wounds *" << std::endl;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 17:11:23 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/15 18:22:40 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	return ;
}

AMateria::AMateria(std::string const & type) : type(type), xp(0)
{
	return ;
}

AMateria::AMateria(AMateria const &src)
{
	*this = src;
}

AMateria::~AMateria(void)
{
	return ;
}

AMateria	&AMateria::operator=(AMateria const &src)
{
	this->type = src.type;
	this->xp = src.xp;
	return (*this);
}

std::string const	&AMateria::getType() const
{
	return this->type;
}

unsigned int		AMateria::getXP() const
{
	return this->xp;
}

void				AMateria::use(ICharacter &target)
{
	(void)target;
	this->xp += 10;
}
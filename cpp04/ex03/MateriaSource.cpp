/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 12:16:28 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/16 14:33:56 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : countMateria(0)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	*this = src;
}

MateriaSource::~MateriaSource(void)
{
	if (this->inventory[0])
	for (int i = 0; i < this->countMateria; i++)
		delete this->inventory[i];
	return ;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &src)
{
	this->countMateria = src.countMateria;
	if (this->inventory[0])
		for (int i = 0; i < this->countMateria; i++)
			delete this->inventory[i];
	if (src.inventory[0])
		for (int i = 0; i < src.countMateria; i++)
			this->inventory[i] = src.inventory[i];
	return (*this);
}


void		MateriaSource::learnMateria(AMateria *materia)
{
	if (this->countMateria == 4 || !materia)
		return ;
	this->inventory[this->countMateria] = materia;
	this->countMateria++;
}

AMateria* 	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < this->countMateria; i++)
		if (this->inventory[i]->getType() == type)
			return this->inventory[i]->clone();
	return 0;		
}

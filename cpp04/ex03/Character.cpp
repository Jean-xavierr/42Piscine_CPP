/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 17:41:13 by jereligi          #+#    #+#             */
/*   Updated: 2020/11/19 17:08:10 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	return ;
}

Character::Character(std::string name) : name(name), countMateria(0)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	return ;
}

Character::Character(Character const &src)
{
	*this = src;
}

Character::~Character(void)
{
	if (this->inventory[0])
	{
		for (int i = 0; i < this->countMateria; i++)
			delete this->inventory[i];
	}
	return ;
}

Character	&Character::operator=(Character const &src)
{
	this->name = src.name;
	if (this->inventory[0])
		for (int i = 0; i < this->countMateria; i++)
			delete this->inventory[i];
	if (src.inventory[0])
		for (int i = 0; i < src.countMateria; i++)
			this->inventory[i] = src.inventory[i]->clone();
	this->countMateria = src.countMateria;
	return (*this);
}

std::string const	&Character::getName() const
{
	return this->name;
}

void	Character::equip(AMateria* m)
{
	if (this->countMateria == 4 || !m)
		return ;
	this->inventory[this->countMateria] = m;
	this->countMateria++;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= this->countMateria || this->inventory[idx] == NULL)
		return ;
	this->countMateria -= 1;
	for (int i = idx; i < 3; i++)
		this->inventory[i] = this->inventory[i + 1];
	this->inventory[3] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= this->countMateria || this->inventory[idx] == NULL)
		return ;
	this->inventory[idx]->use(target);
}

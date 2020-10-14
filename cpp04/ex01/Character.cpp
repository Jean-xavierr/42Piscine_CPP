/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 14:52:21 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/14 15:35:33 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	return ;
}

Character::Character(std::string const & name) : name(name), ap(40), weapon()
{
	return ;
}

Character::Character(Character const &src)
{
	*this = src;
}

Character::~Character(void)
{
	return ;
}

Character	&Character::operator=(Character const &src)
{
	this->name = src.name;
	this->ap = src.ap;
	this->weapon = src.weapon;
	return (*this);
}

void 		Character::recoverAP()
{
	this->ap += 10;
	if (this->ap > 40)
		this->ap = 40;
	return ;
}

void 		Character::equip(AWeapon *weapon)
{
	this->weapon = weapon;
	return ;
}

void 		Character::attack(Enemy *enemy)
{
	if (!this->weapon || !enemy)
		return ;
	if (this->ap >= this->weapon->getAPCost())
	{
		this->ap -= this->weapon->getAPCost();
		std::cout << this->name << " attaque " << enemy->getType() << " with a " \
		<< this->weapon->getName() << std::endl;
		this->weapon->attack();
		enemy->takeDamage(this->weapon->getDamage());
		if (enemy->getHP() == 0)
			delete enemy;
	}
	else
		std::cout << "The character doesn't have enough action points" << std::endl;
	return ;
}

std::string const Character::getName() const
{
	std::stringstream value;

	value << this->name;
	return value.str();
}

AWeapon				*Character::getWeapon() const
{
	return this->weapon;
}

int 				Character::getAP() const
{
	int	ap = this->ap;

	return ap;
}

std::ostream	&operator<<(std::ostream &s, Character const &i)
{
	s << i.getName() << " has " << i.getAP() << " AP and ";
	if (i.getWeapon())
		s << "carries a " << i.getWeapon()->getName();
	else
		s << "is unarmed";
	s << std::endl;
	return s;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 12:38:54 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/14 15:19:25 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void)
{
	return ;
}

Enemy::Enemy(int hp, std::string const &type) : hp(hp), type(type)
{
	return ;
}

Enemy::Enemy(Enemy const &src)
{
	*this = src;
}

Enemy::~Enemy(void)
{
	return ;
}

Enemy	&Enemy::operator=(Enemy const &src)
{
	this->hp = src.hp;
	this->type = src.type;
	return (*this);
}

std::string const	Enemy::getType() const
{
	std::stringstream value;

	value << this->type;
	return value.str();
}

int					Enemy::getHP() const
{
	int		hp;

	hp = this->hp;
	return hp;
}

void				Enemy::takeDamage(int damage)
{
	if (damage > 0)
	{
		this->hp -= damage;
		if (this->hp < 0)
			this->hp = 0;
	}
}

std::string		Enemy::getValues(void) const
{
	std::stringstream	values;

	values << "HP : " << this->getHP() << std::endl;
	values << "Type : " << this->getType();

	return values.str();
}

std::ostream	&operator<<(std::ostream &o, Enemy const &i)
{
	o << i.getValues();;
	return o;
}
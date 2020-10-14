/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 14:28:48 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/14 14:40:29 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Break everything !" << std::endl;
	return ;
}

SuperMutant::SuperMutant(SuperMutant const &src)
{
	*this = src;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh ..." << std::endl;
	return ;
}

SuperMutant	&SuperMutant::operator=(SuperMutant const &src)
{
	this->hp = src.hp;
	this->type = src.type;
	return (*this);
}

void		SuperMutant::takeDamage(int hp)
{
	Enemy::takeDamage(hp - 3);
	return ;
}
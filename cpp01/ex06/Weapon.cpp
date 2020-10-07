/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 15:39:17 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/07 16:42:07 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{
	return ;
}

Weapon::~Weapon()
{
	return ;
}

void	Weapon::setType(std::string type)
{
	this->type = type;
	return ;
}

std::string	const	&Weapon::getType(void) const
{
	return (this->type);
}
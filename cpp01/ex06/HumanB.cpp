/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 15:58:57 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/07 17:38:10 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
	return ;
}

HumanB::~HumanB()
{
}

void		HumanB::attack(void) const
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void		HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
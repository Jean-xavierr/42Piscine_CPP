/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 15:50:15 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/07 17:53:09 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
	return ;
}

HumanA::~HumanA()
{
	return ;
}

void		HumanA::attack(void) const
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}
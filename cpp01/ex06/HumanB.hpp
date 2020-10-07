/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 15:59:02 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/07 17:43:05 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	std::string		name;
	Weapon			*weapon;

public:

	HumanB(std::string name);
	~HumanB();
	void	attack(void) const;
	void	setWeapon(Weapon &weapon);
};

#endif
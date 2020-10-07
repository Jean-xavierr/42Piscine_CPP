/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 15:50:18 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/07 17:52:16 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	std::string		name;
	Weapon			&weapon;
	
public:

	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void		attack(void) const;
};

#endif
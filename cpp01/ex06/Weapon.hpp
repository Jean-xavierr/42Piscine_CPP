/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 15:38:39 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/07 16:40:26 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
	std::string	type;
public:

	Weapon(std::string type);
	~Weapon();
	void				setType(std::string type);
	std::string	const	&getType(void) const;
};

#endif
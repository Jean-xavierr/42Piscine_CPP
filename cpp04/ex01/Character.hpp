/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 14:48:17 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/14 15:28:17 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include <sstream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class	Character
{
public:

	Character(void);
	Character(std::string const & name);
	Character(Character const &src);
	Character &operator=(Character const &src);
	virtual ~Character();

	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string const	getName() const;
	AWeapon				*getWeapon() const;
	int 				getAP() const;

protected:
	std::string		name;
	int				ap;
	AWeapon			*weapon;

private:

};

std::ostream	&operator<<(std::ostream &o, Character const &i);

#endif
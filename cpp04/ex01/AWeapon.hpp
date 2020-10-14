/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 11:49:18 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/14 12:16:04 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>
#include <sstream>

class	AWeapon
{
public:

	AWeapon(void);
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const &src);
	AWeapon &operator=(AWeapon const &src);
	virtual ~AWeapon();

	std::string const getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;

	std::string		getValues(void) const;

protected:
	
	std::string	name;
	int			apcost;
	int			damage;

private:

};

std::ostream	&operator<<(std::ostream &o, AWeapon const &i);

#endif
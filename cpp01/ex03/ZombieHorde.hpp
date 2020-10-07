/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 10:40:28 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/07 11:08:55 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
private:
	/* data */
public:
	ZombieHorde(int n);
	~ZombieHorde();
	std::string	random_name(void) const;
	void		announce(Zombie *zombies, int n) const;
};

#endif
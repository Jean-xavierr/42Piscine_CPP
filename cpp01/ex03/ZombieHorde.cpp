/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 10:40:25 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/11/10 16:31:03 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	int i = 0;
	srand (time(NULL));
	this->horde = new Zombie[n];
	this->n = n;

	while (i < n)
	{
		this->horde[i].name = random_name();
		this->horde[i].type = "Horde";
		i++;
	}
	announce();
	return ;
}

ZombieHorde::~ZombieHorde()
{
	delete [] this->horde;
	return ;
}

std::string		ZombieHorde::random_name(void) const
{
	std::string random_name;
	std::string	zombie_name [] = {"Alfred", "Walkers", "Fleshy Zombie", "Fungus Zombie",
	"Cracker", "Stealthy Zombie", "Jeremousse", "Lazy Zombie", "Witcher Zombie" };

	random_name = zombie_name[rand() % 9];
	return random_name;
}

void			ZombieHorde::announce(void) const
{
	int		i = 0;

	while (i < this->n)
	{
		horde[i].advert();
		i++;
	}
}
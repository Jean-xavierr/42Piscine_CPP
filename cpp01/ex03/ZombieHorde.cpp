/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 10:40:25 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/07 10:56:19 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	int i = 0;
	srand (time(NULL));
	Zombie *zombies = new Zombie[n];

	while (i < n)
	{
		zombies[i].name = random_name();
		zombies[i].type = "Horde";
		i++;
	}
	announce(zombies, n);
	delete [] zombies;
	return ;
}

ZombieHorde::~ZombieHorde()
{
	return ;
}

std::string		ZombieHorde::random_name(void)
{
	std::string random_name;
	std::string	zombie_name [] = {"Alfred", "Walkers", "Fleshy Zombie", "Fungus Zombie",
	"Cracker", "Stealthy Zombie", "Jeremousse", "Lazy Zombie", "Witcher Zombie" };

	random_name = zombie_name[rand() % 9];
	return random_name;
}

void			ZombieHorde::announce(Zombie *zombies, int n)
{
	int		i = 0;

	while (i < n)
	{
		zombies[i].advert();
		i++;
	}
}
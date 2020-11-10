/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 21:14:49 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/11/09 16:58:48 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
	srand (time(NULL));
	return ;
}

ZombieEvent::~ZombieEvent()
{
	return ;
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
	return ;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie	*newZombie = new Zombie(name, this->type);
	return (newZombie);
}

void	ZombieEvent::randomChump(void)
{
	std::string random_name;
	std::string	zombie_name [] = {"Alfred", "Walkers", "Fleshy Zombie", "Fungus Zombie",
	"Cracker", "Stealthy Zombie", "Jeremousse", "Lazy Zombie", "Witcher Zombie" };

	random_name = zombie_name[rand() % 9];
	Zombie zombie(random_name, this->type);
	zombie.advert();
}
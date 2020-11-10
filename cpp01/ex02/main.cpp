/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 21:14:58 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/11/10 16:21:32 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int			main(void)
{
	ZombieEvent event;
	Zombie		*zombie;
	Zombie		*zombie2 = new Zombie("Jack", "Dark");

	event.setZombieType("Biter");
	zombie = event.newZombie("Mariette");
	zombie->advert();
	event.setZombieType("Inflated");
	event.randomChump();
	delete zombie;

	std::cout << std::endl;
	event.setZombieType("Jumper");
	zombie = event.newZombie("Stellou");
	zombie->advert();
	event.setZombieType("Savage");
	event.randomChump();

	std::cout << std::endl;
	zombie2->advert();
	
	delete zombie;
	delete zombie2;

	return 0;
}
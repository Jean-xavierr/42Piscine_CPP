/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 21:14:51 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/07 10:18:46 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{
private:
	/* data */
public:

	std::string type;

	ZombieEvent(void);
	~ZombieEvent();
	void	setZombieType(std::string type);
	Zombie	*newZombie(std::string name);
	void	randomChump(void);
};

#endif
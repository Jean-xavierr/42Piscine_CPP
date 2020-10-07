/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 21:13:59 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/07 10:47:25 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie()
{
	std::string random_goodbye;
	std::string	goodbye [] = {"Ate a friend and he left", "pass his way and go to the beach", 
	"Chew a leg and go join the zombies", "nibble a neighbor and walk away"};

	random_goodbye = goodbye[rand() % 4];
	std::cout << "< " << this->name << " " << this->type << " >" << " " << random_goodbye << std::endl;
	return ;
}

void	Zombie::advert(void) const
{
	std::cout << "< " << this->name << " " << this->type << " >" << " Braiiiiiiinnnssss ..." << std::endl;
	return ;
}

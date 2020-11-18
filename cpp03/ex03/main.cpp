/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 11:30:08 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/11/18 11:09:24 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int			main(void)
{
	FragTrap	frag("R2D2");
	ScavTrap	scav("Jeremouss");
	NinjaTrap	*ninja = new NinjaTrap("Ninja");

	std::cout << std::endl << std::endl;
	ninja->ninjaShoebox(frag);
	ninja->ninjaShoebox(scav);
	ninja->ninjaShoebox(*ninja);
	std::cout << std::endl << std::endl;
	std::cout << *ninja << std::endl;
	delete ninja;
	return (0);
}
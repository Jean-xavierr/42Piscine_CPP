/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 11:30:08 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/13 16:14:39 by jereligi         ###   ########.fr       */
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
	ClapTrap	clap("Clapouss");
	NinjaTrap	*ninja = new NinjaTrap("Ninja");

	std::cout << std::endl << std::endl;
	ninja->ninjaShoebox(frag);
	ninja->ninjaShoebox(scav);
	ninja->ninjaShoebox(clap);
	std::cout << std::endl << std::endl;
	delete ninja;
	return (0);
}
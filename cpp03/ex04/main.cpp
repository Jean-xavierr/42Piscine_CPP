/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 11:30:08 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/13 17:55:58 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int			main(void)
{
	FragTrap	frag("R2D2");
	ScavTrap	scav("Jeremouss");
	ClapTrap	clap("Clapouss");
	NinjaTrap	ninja("Ninja");
	SuperTrap	super("Super");

	std::cout << std::endl << std::endl;
	super.vaulthunter_dot_exe("Jeremouss");
	super.rangedAttack("Clapouss");
	super.meleeAttack("R2D2");

	std::cout << std::endl << std::endl;
	super.ninjaShoebox(clap);
	super.ninjaShoebox(scav);
	super.ninjaShoebox(frag);
	std::cout << std::endl << std::endl;
	
	std::cout << super << std::endl;
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 11:30:08 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/10 17:47:13 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int			main(void)
{
	FragTrap	frag("R2D2");
	ScavTrap	scav("Jeremouss");
	ClapTrap	clap("Clapouss");

	std::cout << std::endl;
	frag.meleeAttack("Jeremouss");
	scav.takeDamage(30);
	clap.rangedAttack("R2D2");
	frag.takeDamage(15);
	clap.vaulthunter_dot_exe("R2D2");
	std::cout << std::endl;

	std::cout << std::endl;
	scav.rangedAttack("R2D2");
	frag.takeDamage(15);
	std::cout << std::endl;

	std::cout << std::endl;
	frag.vaulthunter_dot_exe("Jeremouss");
	scav.takeDamage(35);
	std::cout << std::endl;

	std::cout << std::endl;
	frag.beRepaired(10);
	frag.vaulthunter_dot_exe("Jeremouss");
	scav.takeDamage(35);
	std::cout << std::endl;

	std::cout << frag << std::endl;
	std::cout << scav << std::endl;

	scav.challengeNewcomer("R2D2");
	clap.challengeNewcomer("Jeremouss");
	std::cout << std::endl;
	return (0);
}
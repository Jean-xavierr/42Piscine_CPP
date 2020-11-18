/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 11:30:08 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/11/18 14:39:10 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int			main(void)
{
	FragTrap	frag("R2D2");
	ScavTrap	scav("Jeremouss");


	std::cout << std::endl << std::endl;
	std::cout << "-----> FragTrap Test <----" << std::endl;
	frag.meleeAttack("Jeremouss");
	scav.takeDamage(30);
	frag.rangedAttack("Jeremouss");
	scav.takeDamage(20);
	frag.vaulthunter_dot_exe("Jeremouss");
	scav.takeDamage(35);
	std::cout << std::endl;

	std::cout << std::endl << std::endl;
	std::cout << "-----> ScavTrap Test <----" << std::endl;
	scav.beRepaired(20);
	scav.meleeAttack("R2D2");
	frag.takeDamage(20);
	scav.rangedAttack("R2D2");
	frag.takeDamage(15);
	scav.challengeNewcomer("R2D2");

	std::cout << std::endl << std::endl;
	std::cout << frag << std::endl;
	std::cout << scav << std::endl;

	std::cout << std::endl;
	return (0);
}
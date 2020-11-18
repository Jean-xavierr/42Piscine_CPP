/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 11:30:08 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/11/18 14:57:55 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int			main(void)
{
	srand (time(NULL));
	FragTrap robot1("Dedsec");
	FragTrap robot2("R2D2");

	std::cout << std::endl;
	robot1.meleeAttack("R2D2");
	robot2.takeDamage(30);
	std::cout << std::endl;

	std::cout << std::endl;
	robot1.rangedAttack("R2D2");
	robot2.takeDamage(20);
	std::cout << std::endl;

	std::cout << std::endl;
	robot2.vaulthunter_dot_exe("Dedsec");
	robot1.takeDamage(35);
	std::cout << std::endl;

	std::cout << std::endl;
	robot1.beRepaired(10);
	robot2.vaulthunter_dot_exe("Dedsec");
	robot1.takeDamage(35);
	std::cout << std::endl;

	std::cout << robot1 << std::endl;
	std::cout << robot2 << std::endl;
	return (0);
}
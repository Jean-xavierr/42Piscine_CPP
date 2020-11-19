/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 12:10:45 by jereligi          #+#    #+#             */
/*   Updated: 2020/11/19 11:20:00 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int		main(void)
{
	Character* Hero = new Character("Hero");

	std::cout << *Hero << std::endl;

	Enemy* b = new RadScorpion();
	Enemy* s = new SuperMutant();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	Hero->equip(pr);
	std::cout << *Hero;
	Hero->equip(pf);

	Hero->attack(b);
	std::cout << *Hero << std::endl;
	Hero->equip(pr);

	std::cout << *Hero;
	Hero->attack(b);
	std::cout << *Hero << std::endl;

	Hero->attack(b);
	std::cout << *Hero << std::endl;

	Hero->attack(s);
	std::cout << *Hero << std::endl;
	std::cout << *s << std::endl;
	Hero->attack(s);
	std::cout << *Hero << std::endl;
	std::cout << *s << std::endl;
	Hero->attack(s);
	Hero->attack(s);
	Hero->attack(s);
	
	delete s;
	delete Hero;
	delete pr;
	delete pf;
	return 0;
}
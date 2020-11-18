/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 12:06:25 by jereligi          #+#    #+#             */
/*   Updated: 2020/11/18 11:16:18 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

void		NinjaTrap::init_var(void)
{
	this->hit_points = NT_HIT_POINT;
	this->energy_points = NT_ENERGY_POINTS;
	this->max_hit_points = NT_MAX_HIT_POINTS;
	this->max_hit_energy = NT_MAX_HIT_ENERGY;
	this->level = NT_LEVEL;
	this->melee_attack_damage = NT_MELEE_ATTACK_DAMAGE;
	this->ranged_attack_damage = NT_RANGED_ATTACK_DAMAGE;
	this->armor_damage_reduction = NT_ARMOR_DAMAGE_REDUCTION;
	return ;
}

NinjaTrap::NinjaTrap(void) : ClapTrap()
{
	init_var();
	std::cout << "Séquence d'initiation de NINJ4-TP terminée." << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	init_var();
	std::cout << "Séquence d'initiation de NINJ4-TP terminée." << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(NinjaTrap const &src)
{
	*this = src;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "Destruction de NINJ4-TP " << this->name << std::endl;
	return ;
}

NinjaTrap		&NinjaTrap::operator=(NinjaTrap const &src)
{
	this->hit_points = src.hit_points;
	this->energy_points = src.energy_points;
	this->max_hit_points = src.max_hit_points;
	this->max_hit_energy = src.max_hit_energy;
	this->level = src.level;
	this->melee_attack_damage = src.melee_attack_damage;
	this->ranged_attack_damage = src.ranged_attack_damage;
	this->armor_damage_reduction = src.armor_damage_reduction;
	return *this;
}

void 		NinjaTrap::ninjaShoebox(NinjaTrap &trap)
{
	if (this->energy_points >= 20)
	{
		this->energy_points -= 20;
		std::cout << NT_NINJA_ATTACK << std::endl;
		trap.takeDamage(this->melee_attack_damage);
	}
	else
		std::cout << TEXT_NO_ENERGY << std::endl;
}

void 		NinjaTrap::ninjaShoebox(ScavTrap &trap)
{
	if (this->energy_points >= 20)
	{
		this->energy_points -= 20;
		std::cout << NT_NINJA_ATTACK << std::endl;
		trap.takeDamage(this->melee_attack_damage);
	}
	else
		std::cout << TEXT_NO_ENERGY << std::endl;
}

void 		NinjaTrap::ninjaShoebox(FragTrap &trap)
{
	if (this->energy_points >= 20)
	{
		this->energy_points -= 20;
		std::cout << NT_NINJA_ATTACK << std::endl;
		trap.takeDamage(this->melee_attack_damage);
	}
	else
		std::cout << TEXT_NO_ENERGY << std::endl;
}

std::ostream	&operator<<(std::ostream &o, NinjaTrap const &i)
{
	o << i.getValues();
	return o;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 12:06:25 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/13 16:15:46 by jereligi         ###   ########.fr       */
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

NinjaTrap::NinjaTrap(void) : name("default")
{
	init_var();
	std::cout << "Séquence d'initiation terminée." << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(std::string name) : name(name)
{
	init_var();
	std::cout << "Séquence d'initiation terminée." << std::endl;
	std::cout << NT_TEXT_PRESENTATION << std::endl;
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

void			NinjaTrap::setName(std::string name)
{
	this->name = name;
	return ;
}

std::string		NinjaTrap::getValues(void) const
{
	std::stringstream	values;

	values << NT_GET_VALUE_NAME << std::endl;
	values << NT_GET_VALUE_HIT_POINT << std::endl;
	values << NT_GET_VALUE_ENERGY << std::endl;
	values << NT_GET_VALUE_LEVEL << std::endl;
	values << NT_GET_VALUE_MELEE_ATTACK << std::endl;
	values << NT_GET_VALUE_RANGED_ATTACK << std::endl;
	values << NT_GET_VALUE_ARMOR_REDUCTION << std::endl;
	return	values.str();
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

void		NinjaTrap::rangedAttack(std::string const &target) const
{
	std::cout << NT_TEXT_RANGED_ATTACK << std::endl;
	return ;
}

void		NinjaTrap::meleeAttack(std::string const &target) const
{
	std::cout << NT_TEXT_MELEE_ATTACK << std::endl;
	return ;
}

void		NinjaTrap::takeDamage(unsigned int amount)
{
	if ((int)amount - this->armor_damage_reduction > this->hit_points)
		this->hit_points = 0;
	else
		this->hit_points -= (amount - this->armor_damage_reduction);
	std::cout << NT_TEXT_TAKE_DAMAGE << std::endl;
	return ;
}

void		NinjaTrap::beRepaired(unsigned int amount)
{
	this->hit_points += amount;
	this->energy_points += amount;
	if ((int)amount + this->hit_points > this->max_hit_points)
		this->hit_points = this->max_hit_points;
	if ((int)amount + this->energy_points > this->max_hit_energy)
		this->energy_points = this->max_hit_energy;
	std::cout << NT_TEXT_REPAIRED << std::endl;
	return ;
}

void 		NinjaTrap::ninjaShoebox(ClapTrap &trap)
{
	if (this->energy_points >= 20)
	{
		this->energy_points -= 20;
		std::cout << NT_NINJA_ATTACK << std::endl;
		trap.takeDamage(this->melee_attack_damage);
	}
	else
		std::cout << NT_TEXT_NO_ENERGY << std::endl;
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
		std::cout << NT_TEXT_NO_ENERGY << std::endl;
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
		std::cout << NT_TEXT_NO_ENERGY << std::endl;
}
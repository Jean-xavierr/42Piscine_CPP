/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 16:14:23 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/13 16:13:00 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void		ClapTrap::init_var(void)
{
	this->hit_points = CT_HIT_POINT;
	this->energy_points = CT_ENERGY_POINTS;
	this->max_hit_points = CT_MAX_HIT_POINTS;
	this->max_hit_energy = CT_MAX_HIT_ENERGY;
	this->level = CT_LEVEL;
	this->melee_attack_damage = CT_MELEE_ATTACK_DAMAGE;
	this->ranged_attack_damage = CT_RANGED_ATTACK_DAMAGE;
	this->armor_damage_reduction = CT_ARMOR_DAMAGE_REDUCTION;
	return ;
}

ClapTrap::ClapTrap(void) : name("default")
{
	init_var();
	std::cout << "Séquence d'initiation terminée." << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : FragTrap(name), ScavTrap(name), name(name)
{
	init_var();
	std::cout << "Séquence d'initiation terminée." << std::endl;
	std::cout << CT_TEXT_PRESENTATION << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destruction de CL4V-TP " << this->name << std::endl;
	return ;
}

void			ClapTrap::setName(std::string name)
{
	this->name = name;
	return ;
}

std::string		ClapTrap::getValues(void) const
{
	std::stringstream	values;

	values << CT_GET_VALUE_NAME << std::endl;
	values << CT_GET_VALUE_HIT_POINT << std::endl;
	values << CT_GET_VALUE_ENERGY << std::endl;
	values << CT_GET_VALUE_LEVEL << std::endl;
	values << CT_GET_VALUE_MELEE_ATTACK << std::endl;
	values << CT_GET_VALUE_RANGED_ATTACK << std::endl;
	values << CT_GET_VALUE_ARMOR_REDUCTION << std::endl;
	return	values.str();
}

std::string		ClapTrap::getName(void) const
{
	std::stringstream name;

	name << this->name;
	return name.str();
}

ClapTrap		&ClapTrap::operator=(ClapTrap const &src)
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

std::ostream	&operator<<(std::ostream &o, ClapTrap const &instance)
{
	o << instance.getValues() << std::endl;
	return o;
}

void		ClapTrap::rangedAttack(std::string const &target) const
{
	std::cout << CT_TEXT_RANGED_ATTACK << std::endl;
	return ;
}

void		ClapTrap::meleeAttack(std::string const &target) const
{
	std::cout << CT_TEXT_MELEE_ATTACK << std::endl;
	return ;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if ((int)amount - this->armor_damage_reduction > this->hit_points)
		this->hit_points = 0;
	else
		this->hit_points -= (amount - this->armor_damage_reduction);
	std::cout << CT_TEXT_TAKE_DAMAGE << std::endl;
	return ;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	this->hit_points += amount;
	this->energy_points += amount;
	if ((int)amount + this->hit_points > this->max_hit_points)
		this->hit_points = this->max_hit_points;
	if ((int)amount + this->energy_points > this->max_hit_energy)
		this->energy_points = this->max_hit_energy;
	std::cout << CT_TEXT_REPAIRED << std::endl;
	return ;
}
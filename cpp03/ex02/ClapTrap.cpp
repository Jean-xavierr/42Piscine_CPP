/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 16:14:23 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/11/18 11:14:55 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : name("default")
{
	std::cout << "Séquence d'initiation terminée." << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : name(name)
{
	std::cout << "Séquence d'initiation terminée." << std::endl;
	std::cout << TEXT_PRESENTATION << std::endl;
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

std::string		ClapTrap::getName(void) const
{
	return this->name;
}

std::string		ClapTrap::getValues(void) const
{
	std::stringstream	values;

	values << GET_VALUE_NAME << std::endl;
	values << GET_VALUE_HIT_POINT << std::endl;
	values << GET_VALUE_ENERGY << std::endl;
	values << GET_VALUE_LEVEL << std::endl;
	values << GET_VALUE_MELEE_ATTACK << std::endl;
	values << GET_VALUE_RANGED_ATTACK << std::endl;
	values << GET_VALUE_ARMOR_REDUCTION << std::endl;
	return	values.str();
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
	std::cout << TEXT_RANGED_ATTACK << std::endl;
	return ;
}

void		ClapTrap::meleeAttack(std::string const &target) const
{
	std::cout << TEXT_MELEE_ATTACK << std::endl;
	return ;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if ((int)amount - this->armor_damage_reduction > this->hit_points)
		this->hit_points = 0;
	else
		this->hit_points -= (amount - this->armor_damage_reduction);
	std::cout << TEXT_TAKE_DAMAGE << std::endl;
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
	std::cout << TEXT_REPAIRED << std::endl;
	return ;
}
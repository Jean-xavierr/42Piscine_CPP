/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 14:45:50 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/13 16:10:12 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include "GlobalTrap.hpp"

void		SuperTrap::init_var(void)
{
	this->hit_points = this->FragTrap::hit_points;
	this->energy_points = this->NinjaTrap::energy_points;
	this->max_hit_points = this->FragTrap::max_hit_energy;
	this->max_hit_energy = this->NinjaTrap::max_hit_energy;
	this->level = 1;
	this->melee_attack_damage = this->NinjaTrap::melee_attack_damage;
	this->ranged_attack_damage = this->FragTrap::ranged_attack_damage;
	this->armor_damage_reduction = this->FragTrap::armor_damage_reduction;
	std::cout << this->melee_attack_damage  << std::endl;
	return ;
}

SuperTrap::SuperTrap(void) : name("default")
{
	init_var();
	std::cout << "Séquence d'initiation terminée." << std::endl;
	return ;
}

SuperTrap::SuperTrap(std::string name) : FragTrap(name), NinjaTrap(name), name(name)
{
	init_var();
	std::cout << "Séquence d'initiation terminée." << std::endl;
	std::cout << "Je suis" << COLOR_RED" SUPER-TP "								\
	<< this->name << COLOR_RESET " super machine ninja de la mort sans pitié !"	\
	<< std::endl;
	return ;
}

SuperTrap::SuperTrap(SuperTrap const &src)
{
	*this = src;
}

SuperTrap		&SuperTrap::operator=(SuperTrap const &src)
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

SuperTrap::~SuperTrap(void)
{
	std::cout << "Destruction de SUPER-TP " << this->name << std::endl;
	return ;
}

void		SuperTrap::rangedAttack(std::string const &target) const
{
	FragTrap::rangedAttack(target);
	return ;
}

void		SuperTrap::meleeAttack(std::string const &target) const
{
	NinjaTrap::meleeAttack(target);
	return ;
}

std::string		SuperTrap::getValues(void) const
{
	std::stringstream	values;

	values << SPT_GET_VALUE_NAME << std::endl;
	values << SPT_GET_VALUE_HIT_POINT << std::endl;
	values << SPT_GET_VALUE_ENERGY << std::endl;
	values << SPT_GET_VALUE_LEVEL << std::endl;
	values << SPT_GET_VALUE_MELEE_ATTACK << std::endl;
	values << SPT_GET_VALUE_RANGED_ATTACK << std::endl;
	values << SPT_GET_VALUE_ARMOR_REDUCTION << std::endl;
	return	values.str();
}

std::ostream	&operator<<(std::ostream &o, SuperTrap const &instance)
{
	o << instance.getValues() << std::endl;
	return o;
}
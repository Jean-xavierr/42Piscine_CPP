/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 14:45:50 by jereligi          #+#    #+#             */
/*   Updated: 2020/11/18 15:14:23 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include "GlobalTrap.hpp"

void		SuperTrap::init_var(void)
{
	this->hit_points = this->FragTrap::hit_points;
	this->energy_points = this->NinjaTrap::energy_points;
	this->max_hit_points = this->FragTrap::max_hit_points;
	this->max_hit_energy = this->NinjaTrap::max_hit_energy;
	this->level = 1;
	this->melee_attack_damage = this->NinjaTrap::melee_attack_damage;
	this->ranged_attack_damage = this->FragTrap::ranged_attack_damage;
	this->armor_damage_reduction = this->FragTrap::armor_damage_reduction;
	return ;
}

SuperTrap::SuperTrap(void) : ClapTrap(), FragTrap(), NinjaTrap()
{
	init_var();
	initSuperTrap();
	std::cout << "Séquence d'initiation de SUPER-TP terminée." << std::endl;
	return ;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	init_var();
	initSuperTrap();
	std::cout << "Séquence d'initiation de SUPER-TP terminée." << std::endl;
	std::cout << "Je suis" << COLOR_RED" SUPER-TP "								\
	<< name << COLOR_RESET " super machine ninja de la mort sans pitié !"	\
	<< std::endl;
	return ;
}

SuperTrap::SuperTrap(SuperTrap const &src) : ClapTrap(src)
{
	return ;
}

SuperTrap		&SuperTrap::operator=(SuperTrap const &src)
{
	if (this == &src)
		return (*this);
	ClapTrap::operator=(src);
	return *this;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "Destruction de SUPER-TP " << std::endl;
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

std::ostream	&operator<<(std::ostream &o, SuperTrap const &instance)
{
	o << instance.getValues() << std::endl;
	return o;
}
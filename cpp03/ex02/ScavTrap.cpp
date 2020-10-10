/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 10:56:25 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/10 15:05:22 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void		ScavTrap::init_var(void)
{
	this->hit_points = ST_HIT_POINT;
	this->energy_points = ST_ENERGY_POINTS;
	this->max_hit_points = ST_MAX_HIT_POINTS;
	this->max_hit_energy = ST_MAX_HIT_ENERGY;
	this->level = ST_LEVEL;
	this->melee_attack_damage = ST_MELEE_ATTACK_DAMAGE;
	this->ranged_attack_damage = ST_RANGED_ATTACK_DAMAGE;
	this->armor_damage_reduction = ST_ARMOR_DAMAGE_REDUCTION;
	return ;
}

ScavTrap::ScavTrap(void) : name("default")
{
	init_var();
	std::cout << "Séquence d'initiation terminée." << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : name(name)
{
	init_var();
	std::cout << "Séquence d'initiation terminée." << std::endl;
	std::cout << ST_TEXT_PRESENTATION << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	*this = src;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destruction de SC4V-TP " << this->name << std::endl;
	return ;
}

void			ScavTrap::setName(std::string name)
{
	this->name = name;
	return ;
}

std::string		ScavTrap::getValues(void) const
{
	std::stringstream	values;

	values << ST_GET_VALUE_NAME << std::endl;
	values << ST_GET_VALUE_HIT_POINT << std::endl;
	values << ST_GET_VALUE_ENERGY << std::endl;
	values << ST_GET_VALUE_LEVEL << std::endl;
	values << ST_GET_VALUE_MELEE_ATTACK << std::endl;
	values << ST_GET_VALUE_RANGED_ATTACK << std::endl;
	values << ST_GET_VALUE_ARMOR_REDUCTION << std::endl;
	return	values.str();
}

ScavTrap		&ScavTrap::operator=(ScavTrap const &src)
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

std::ostream	&operator<<(std::ostream &o, ScavTrap const &instance)
{
	o << instance.getValues() << std::endl;
	return o;
}

void		ScavTrap::rangedAttack(std::string const &target) const
{
	std::cout << ST_TEXT_RANGED_ATTACK << std::endl;
	return ;
}

void		ScavTrap::meleeAttack(std::string const &target) const
{
	std::cout << ST_TEXT_MELEE_ATTACK << std::endl;
	return ;
}

void		ScavTrap::takeDamage(unsigned int amount)
{
	if ((int)amount - this->armor_damage_reduction > this->hit_points)
		this->hit_points = 0;
	else
		this->hit_points -= (amount - this->armor_damage_reduction);
	std::cout << ST_TEXT_TAKE_DAMAGE << std::endl;
	return ;
}

void		ScavTrap::beRepaired(unsigned int amount)
{
	this->hit_points += amount;
	this->energy_points += amount;
	if ((int)amount + this->hit_points > this->max_hit_points)
		this->hit_points = this->max_hit_points;
	if ((int)amount + this->energy_points > this->max_hit_energy)
		this->energy_points = this->max_hit_energy;
	std::cout << ST_TEXT_REPAIRED << std::endl;
	return ;
}

void		ScavTrap::challengeNewcomer(std::string const &target)
{
	std::string		random_challenge;
	typedef void	(ScavTrap::*fptr)(std::string const);
	fptr			fchallenge[5];

	fchallenge[0] = &ScavTrap::rockPaperScissors;
	fchallenge[1] = &ScavTrap::askMyLittleFinger;
	fchallenge[2] = &ScavTrap::youLoose;
	fchallenge[3] = &ScavTrap::findMyBirthday;
	fchallenge[4] = &ScavTrap::noChallenge;

	if (rand_seed != time(NULL))
	{
		srand(time(NULL));
		rand_seed = time(NULL);
	}
	if (this->energy_points >= 25)
	{
		(this->*fchallenge[rand() % 5])(target);
		this->energy_points -= 25;
	}
	else
		std::cout << ST_TEXT_NO_ENERGY << std::endl;
	return ;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 11:30:05 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/13 12:45:07 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		rand_seed = 0;

void		FragTrap::init_var(void)
{
	this->hit_points = HIT_POINT;
	this->energy_points = ENERGY_POINTS;
	this->max_hit_points = MAX_HIT_POINTS;
	this->max_hit_energy = MAX_HIT_ENERGY;
	this->level = LEVEL;
	this->melee_attack_damage = MELEE_ATTACK_DAMAGE;
	this->ranged_attack_damage = RANGED_ATTACK_DAMAGE;
	this->armor_damage_reduction = ARMOR_DAMAGE_REDUCTION;
	return ;
}

FragTrap::FragTrap(void) : name("default")
{
	init_var();
	std::cout << "Séquence d'initiation terminée." << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : name(name)
{
	init_var();
	std::cout << "Séquence d'initiation terminée." << std::endl;
	std::cout << TEXT_PRESENTATION << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &src)
{
	*this = src;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destruction de FR4G-TP " << this->name << std::endl;
	return ;
}

void			FragTrap::setName(std::string name)
{
	this->name = name;
	return ;
}

std::string		FragTrap::getValues(void) const
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

std::string		FragTrap::getName(void) const
{
	std::stringstream name;

	name << this->name;
	return name.str();
}

FragTrap		&FragTrap::operator=(FragTrap const &src)
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

std::ostream	&operator<<(std::ostream &o, FragTrap const &instance)
{
	o << instance.getValues() << std::endl;
	return o;
}

void		FragTrap::rangedAttack(std::string const &target) const
{
	std::cout << TEXT_RANGED_ATTACK << std::endl;
	return ;
}

void		FragTrap::meleeAttack(std::string const &target) const
{
	std::cout << TEXT_MELEE_ATTACK << std::endl;
	return ;
}

void		FragTrap::takeDamage(unsigned int amount)
{
	if ((int)amount - this->armor_damage_reduction > this->hit_points)
		this->hit_points = 0;
	else
		this->hit_points -= (amount - this->armor_damage_reduction);
	std::cout << TEXT_TAKE_DAMAGE << std::endl;
	return ;
}

void		FragTrap::beRepaired(unsigned int amount)
{
	std::string random_piece;
	std::string	piece [] = {
		"un bras",
		"une roue",
		"un oeil",
		"une antenne",
		"un paquet de boulon"
	};
	if (rand_seed != time(NULL))
	{
		srand(time(NULL));
		rand_seed = time(NULL);
	}
	random_piece = piece[rand() % 5];
	this->hit_points += amount;
	this->energy_points += amount;
	if (this->hit_points > this->max_hit_points)
		this->hit_points = this->max_hit_points;
	if (this->energy_points > this->max_hit_energy)
		this->energy_points = this->max_hit_energy;
	std::cout << TEXT_REPAIRED << std::endl;
	return ;
}

void		FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::string random_attack;
	std::string	attack [] = {" avec le coup du poney", " avec le rouge à lèvre des ténèbres", \
	" avec une Courgette furtive", " avec un Bisnounours", " avec un bisous maléfique"};

	if (rand_seed != time(NULL))
	{
		srand(time(NULL));
		rand_seed = time(NULL);
	}
	random_attack = attack[rand() % 5];
	if (this->energy_points >= 25)
	{
		std::cout << TEXT_RANDOM_ATTACK << std::endl;
		this->energy_points -= 25;
	}
	else
		std::cout << TEXT_NO_ENERGY << std::endl;
	return ;
}
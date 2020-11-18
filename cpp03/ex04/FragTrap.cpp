/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 11:30:05 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/11/18 14:52:10 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		rand_seed = 0;

void		FragTrap::initSuperTrap(void)
{
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->ranged_attack_damage = 20;
	this->armor_damage_reduction = 5;
}

void		FragTrap::init_var(void)
{
	this->hit_points = FT_HIT_POINT;
	this->energy_points = FT_ENERGY_POINTS;
	this->max_hit_points = FT_MAX_HIT_POINTS;
	this->max_hit_energy = FT_MAX_HIT_ENERGY;
	this->level = FT_LEVEL;
	this->melee_attack_damage = FT_MELEE_ATTACK_DAMAGE;
	this->ranged_attack_damage = FT_RANGED_ATTACK_DAMAGE;
	this->armor_damage_reduction = FT_ARMOR_DAMAGE_REDUCTION;
	return ;
}

FragTrap::FragTrap(void) : ClapTrap()
{
	init_var();
	std::cout << "Séquence d'initiation de FR4GG-TP terminée." << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	init_var();
	std::cout << "Séquence d'initiation de FR4G-TP terminée." << std::endl;
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
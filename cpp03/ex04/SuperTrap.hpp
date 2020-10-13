/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 14:45:54 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/13 16:12:01 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include <iostream>
#include <sstream>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class	SuperTrap : public FragTrap, public NinjaTrap
{
public:

	SuperTrap(void);
	SuperTrap(std::string name);
	SuperTrap(SuperTrap const &src);
	SuperTrap &operator=(SuperTrap const &src);
	~SuperTrap();

	void			init_var(void);
	void			rangedAttack(std::string const &target) const;
	void			meleeAttack(std::string const &target) const;
	std::string		getValues(void) const;

private:

	std::string	name;
	int			hit_points;
	int			energy_points;
	int			max_hit_points;
	int			max_hit_energy;
	int			level;
	int			melee_attack_damage;
	int			ranged_attack_damage;
	int			armor_damage_reduction;
};

std::ostream	&operator<<(std::ostream &o, SuperTrap const &instance);

#define SPT_GET_VALUE_NAME				COLOR_WHITE "Name:            " COLOR_RESET << this->name
#define SPT_GET_VALUE_HIT_POINT 		COLOR_WHITE "Life:            "	COLOR_RESET << this->hit_points	<< "/" << this->max_hit_points
#define SPT_GET_VALUE_ENERGY			COLOR_WHITE "Energy:          " COLOR_RESET	<< this->energy_points << "/" << this->max_hit_energy
#define SPT_GET_VALUE_LEVEL				COLOR_WHITE "Level:           " COLOR_RESET << this->level
#define SPT_GET_VALUE_MELEE_ATTACK		COLOR_WHITE "Melee attack:    " COLOR_RESET << this->melee_attack_damage
#define SPT_GET_VALUE_RANGED_ATTACK		COLOR_WHITE "Ranged attack:   " COLOR_RESET << this->ranged_attack_damage 
#define SPT_GET_VALUE_ARMOR_REDUCTION	COLOR_WHITE "Armor reduction: " COLOR_RESET << this->armor_damage_reduction

#endif
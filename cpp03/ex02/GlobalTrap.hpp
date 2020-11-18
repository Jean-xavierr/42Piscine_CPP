/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GlobalTrap.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 11:14:15 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/11/18 10:56:19 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GLOBALTRAP_HPP
#define GLOBALTRAP_HPP

/* rand_seed variable in FragTrap.cpp */
extern int	rand_seed;

#define COLOR_RESET			"\033[0m"
#define COLOR_RED			"\033[1;31m"
#define COLOR_BLUE			"\033[1;34m"
#define COLOR_GREEN			"\033[1;32m"
#define COLOR_WHITE			"\033[1;37m"
#define COLOR_YELLOW		"\033[33m"
#define COLOR_CYAN			"\033[1;36m"


/*
** Define for display messages 
** of the FrapTrap class
*/

#define FT_LEVEL 1
#define FT_HIT_POINT 	100
#define FT_ENERGY_POINTS 100
#define FT_MAX_HIT_POINTS 100
#define FT_MAX_HIT_ENERGY 100
#define FT_MELEE_ATTACK_DAMAGE 30
#define FT_RANGED_ATTACK_DAMAGE 20
#define FT_ARMOR_DAMAGE_REDUCTION 5

#define TEXT_RANDOM_ATTACK	COLOR_BLUE "FR4G-TP " << this->name << 	\
	COLOR_RESET << " attaque " << COLOR_BLUE << target				\
	<< COLOR_RESET << random_attack << ", causant " 				\
	<< COLOR_RED << 35 << COLOR_RESET << " points de dégâts !" 

/*
** Define for display messages 
** of the ScavTrap class
*/

#define ST_LEVEL 1
#define ST_HIT_POINT 	100
#define ST_ENERGY_POINTS 50
#define ST_MAX_HIT_POINTS 100
#define ST_MAX_HIT_ENERGY 50
#define ST_MELEE_ATTACK_DAMAGE 20
#define ST_RANGED_ATTACK_DAMAGE 15
#define ST_ARMOR_DAMAGE_REDUCTION 3

#define ST_TEXT_CHALLENGE_ROBOT	COLOR_CYAN "SC4V-TP " << this->name 		\
	<< COLOR_RESET << " lance un challenge à " << COLOR_CYAN << target 		\
	<< COLOR_RESET << " !"

#endif
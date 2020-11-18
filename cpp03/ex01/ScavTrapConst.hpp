/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrapConst.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 11:03:37 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/11/18 14:32:15 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAPCONST_HPP
#define SCAVTRAPCONST_HPP

#include "ScavTrap.hpp"
#include "GlobalTrap.hpp"

/*
** Acronym ST is to differentiate Define
** ScavTrap from FrapTrap
*/

#define ST_LEVEL 1
#define ST_HIT_POINT 	100
#define ST_ENERGY_POINTS 50
#define ST_MAX_HIT_POINTS 100
#define ST_MAX_HIT_ENERGY 50
#define ST_MELEE_ATTACK_DAMAGE 20
#define ST_RANGED_ATTACK_DAMAGE 15
#define ST_ARMOR_DAMAGE_REDUCTION 3

/*
** Define for display messages 
** of the ScavTrap class
*/

#define ST_TEXT_PRESENTATION	"Je suis" << COLOR_CYAN " SC4V-TP "			\
	<< this->name << COLOR_RESET " machine à CHALLENGE sans pitié !"

#define ST_TEXT_RANGED_ATTACK	COLOR_CYAN << "SC4V-TP " << this->name 		\
	<< COLOR_RESET << " attaque " << COLOR_CYAN << target					\
	<< COLOR_RESET << " à distance, causant " << COLOR_RED 					\
	<< this->ranged_attack_damage << COLOR_RESET 							\
	<< " points de dégâts !"

#define ST_TEXT_MELEE_ATTACK	COLOR_CYAN "SC4V-TP " << this->name 		\
	<< COLOR_RESET << " attaque " << COLOR_CYAN << target					\
	<< COLOR_RESET << " au corps à corps, causant " << COLOR_RED 			\
	<< this->melee_attack_damage << COLOR_RESET 							\
	<< " points de dégâts !"

#define ST_TEXT_TAKE_DAMAGE 	COLOR_CYAN "SC4V-TP " << this->name 		\
	<< COLOR_RESET " à subi " << COLOR_RED 									\
	<< (amount - this->armor_damage_reduction) << COLOR_RESET 				\
	<< " points de dégâts !" << std::endl	<< "Point de vie " 				\
	<< this->name << ": " COLOR_GREEN << this->hit_points 					\
	<< COLOR_RESET

#define ST_TEXT_RANDOM_CHALLENGE	COLOR_CYAN "SC4V-TP " << this->name 	\
	<< COLOR_RESET << " attaque " << COLOR_CYAN << target					\
	<< COLOR_RESET << random_challenge << ", causant " 						\
	<< COLOR_RED << 35 << COLOR_RESET << " points de dégâts !" 

#define ST_TEXT_NO_ENERGY	COLOR_CYAN "SC4V-TP " << this->name				\
	<< COLOR_RESET " n'a pu " COLOR_YELLOW "d'énergie"						\
	COLOR_RESET " ..."

#define ST_TEXT_REPAIRED	COLOR_CYAN "SC4V-TP " << this->name << 			\
	COLOR_RESET " auto-répation " << COLOR_GREEN << amount 					\
	<< COLOR_RESET << " points de vie" 

#define ST_TEXT_CHALLENGE_ROBOT	COLOR_CYAN "SC4V-TP " << this->name 		\
	<< COLOR_RESET << " lance un challenge à " << COLOR_CYAN << target 		\
	<< COLOR_RESET << " !"

/*
** Define for the getValue function
** To retrieve all the attributes of the ScavTrap Class
*/

#define ST_GET_VALUE_NAME				COLOR_WHITE "Name:            " COLOR_RESET << this->name
#define ST_GET_VALUE_HIT_POINT 			COLOR_WHITE "Life:            "	COLOR_RESET << this->hit_points	<< "/" << this->max_hit_points
#define ST_GET_VALUE_ENERGY				COLOR_WHITE "Energy:          " COLOR_RESET	<< this->energy_points << "/" << this->max_hit_energy
#define ST_GET_VALUE_LEVEL				COLOR_WHITE "Level:           " COLOR_RESET << this->level
#define ST_GET_VALUE_MELEE_ATTACK		COLOR_WHITE "Melee attack:    " COLOR_RESET << this->melee_attack_damage
#define ST_GET_VALUE_RANGED_ATTACK		COLOR_WHITE "Ranged attack:   " COLOR_RESET << this->ranged_attack_damage 
#define ST_GET_VALUE_ARMOR_REDUCTION	COLOR_WHITE "Armor reduction: " COLOR_RESET << this->armor_damage_reduction

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrapConst.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 12:17:35 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/13 16:11:33 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAPCONST_HPP
#define NINJATRAPCONST_HPP

#include "NinjaTrap.hpp"
#include "GlobalTrap.hpp"


/*
** Acronym CT is to differentiate Define
** NinjaTrap from FrapTrap
*/

#define NT_LEVEL 1
#define NT_HIT_POINT 	60
#define NT_ENERGY_POINTS 120
#define NT_MAX_HIT_POINTS 60
#define NT_MAX_HIT_ENERGY 120
#define NT_MELEE_ATTACK_DAMAGE 60
#define NT_RANGED_ATTACK_DAMAGE 5
#define NT_ARMOR_DAMAGE_REDUCTION 0

/*
** Define for display messages 
** of the Ninjatrap class
*/

#define NT_TEXT_PRESENTATION	"Je suis" << COLOR_YELLOW " NINJ4-TP "		\
	<< this->name << COLOR_RESET " machine Ninja boite à chaussure !"

#define NT_TEXT_RANGED_ATTACK	COLOR_YELLOW << "NINJ4-TP " << this->name 	\
	<< COLOR_RESET << " attaque " << COLOR_YELLOW << target					\
	<< COLOR_RESET << " à distance, causant " << COLOR_RED 					\
	<< this->ranged_attack_damage << COLOR_RESET 							\
	<< " points de dégâts !"

#define NT_TEXT_MELEE_ATTACK	COLOR_YELLOW "NINJ4-TP " << this->name 		\
	<< COLOR_RESET << " attaque " << COLOR_YELLOW << target					\
	<< COLOR_RESET << " au corps à corps, causant " << COLOR_RED 			\
	<< this->melee_attack_damage << COLOR_RESET 							\
	<< " points de dégâts !"

#define NT_TEXT_TAKE_DAMAGE 	COLOR_YELLOW "NINJ4-TP " << this->name 		\
	<< COLOR_RESET " à subi " << COLOR_RED 									\
	<< (amount - this->armor_damage_reduction) << COLOR_RESET 				\
	<< " points de dégâts !" << std::endl	<< "Point de vie " 				\
	<< this->name << ": " COLOR_YELLOW << this->hit_points 					\
	<< COLOR_RESET

#define NT_TEXT_NO_ENERGY	COLOR_YELLOW "NINJ4-TP " << this->name			\
	<< COLOR_RESET " n'a pu " COLOR_YELLOW "d'énergie"						\
	COLOR_RESET " ..."

#define NT_TEXT_REPAIRED	COLOR_YELLOW "NINJ4-TP " << this->name << 		\
	COLOR_RESET " auto-répation " << COLOR_YELLOW << amount 				\
	<< COLOR_RESET << " points de vie" 

#define NT_NINJA_ATTACK	COLOR_YELLOW "NINJ4-TP " << this->name 				\
	<< COLOR_RESET << " attaque " << COLOR_YELLOW << trap.getName()			\
	<< COLOR_RESET << " avec une attaque secret Ninja " << COLOR_RED 		\
	<< this->melee_attack_damage << COLOR_RESET 							\
	<< " points de dégâts !"

/*
** Define for the getValue function
** To retrieve all the attributes of the NinjaTrap Class
*/

#define NT_GET_VALUE_NAME				COLOR_WHITE "Name:            " COLOR_RESET << this->name
#define NT_GET_VALUE_HIT_POINT 			COLOR_WHITE "Life:            "	COLOR_RESET << this->hit_points	<< "/" << this->max_hit_points
#define NT_GET_VALUE_ENERGY				COLOR_WHITE "Energy:          " COLOR_RESET	<< this->energy_points << "/" << this->max_hit_energy
#define NT_GET_VALUE_LEVEL				COLOR_WHITE "Level:           " COLOR_RESET << this->level
#define NT_GET_VALUE_MELEE_ATTACK		COLOR_WHITE "Melee attack:    " COLOR_RESET << this->melee_attack_damage
#define NT_GET_VALUE_RANGED_ATTACK		COLOR_WHITE "Ranged attack:   " COLOR_RESET << this->ranged_attack_damage 
#define NT_GET_VALUE_ARMOR_REDUCTION	COLOR_WHITE "Armor reduction: " COLOR_RESET << this->armor_damage_reduction


#endif
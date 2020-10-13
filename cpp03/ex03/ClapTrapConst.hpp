/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrapConst.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 16:23:26 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/13 16:11:26 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAPCONST_HPP
#define CLAPTRAPCONST_HPP

#include "ClapTrap.hpp"
#include "GlobalTrap.hpp"


/*
** Acronym CT is to differentiate Define
** ClapTrap from FrapTrap
*/

#define CT_LEVEL 1
#define CT_HIT_POINT 	100
#define CT_ENERGY_POINTS 50
#define CT_MAX_HIT_POINTS 100
#define CT_MAX_HIT_ENERGY 50
#define CT_MELEE_ATTACK_DAMAGE 20
#define CT_RANGED_ATTACK_DAMAGE 15
#define CT_ARMOR_DAMAGE_REDUCTION 5

/*
** Define for display messages 
** of the Claptrap class
*/

#define CT_TEXT_PRESENTATION	"Je suis" << COLOR_GREEN " CL4P-TP "		\
	<< this->name << COLOR_RESET " une boite à chaussure multi-fonction !"

#define CT_TEXT_RANGED_ATTACK	COLOR_GREEN << "CL4P-TP " << this->name 	\
	<< COLOR_RESET << " attaque " << COLOR_GREEN << target					\
	<< COLOR_RESET << " à distance, causant " << COLOR_RED 					\
	<< this->ranged_attack_damage << COLOR_RESET 							\
	<< " points de dégâts !"

#define CT_TEXT_MELEE_ATTACK	COLOR_GREEN "CL4P-TP " << this->name 		\
	<< COLOR_RESET << " attaque " << COLOR_GREEN << target					\
	<< COLOR_RESET << " au corps à corps, causant " << COLOR_RED 			\
	<< this->melee_attack_damage << COLOR_RESET 							\
	<< " points de dégâts !"

#define CT_TEXT_TAKE_DAMAGE 	COLOR_GREEN "CL4P-TP " << this->name 		\
	<< COLOR_RESET " à subi " << COLOR_RED 									\
	<< (amount - this->armor_damage_reduction) << COLOR_RESET 				\
	<< " points de dégâts !" << std::endl	<< "Point de vie " 				\
	<< this->name << ": " COLOR_GREEN << this->hit_points 					\
	<< COLOR_RESET

#define CT_TEXT_NO_ENERGY	COLOR_GREEN "CL4P-TP " << this->name			\
	<< COLOR_RESET " n'a pu " COLOR_YELLOW "d'énergie"						\
	COLOR_RESET " ..."

#define CT_TEXT_REPAIRED	COLOR_GREEN "CL4P-TP " << this->name << 		\
	COLOR_RESET " auto-répation " << COLOR_GREEN << amount 					\
	<< COLOR_RESET << " points de vie" 

/*
** Define for the getValue function
** To retrieve all the attributes of the ClapTrap Class
*/

#define CT_GET_VALUE_NAME				COLOR_WHITE "Name:            " COLOR_RESET << this->name
#define CT_GET_VALUE_HIT_POINT 			COLOR_WHITE "Life:            "	COLOR_RESET << this->hit_points	<< "/" << this->max_hit_points
#define CT_GET_VALUE_ENERGY				COLOR_WHITE "Energy:          " COLOR_RESET	<< this->energy_points << "/" << this->max_hit_energy
#define CT_GET_VALUE_LEVEL				COLOR_WHITE "Level:           " COLOR_RESET << this->level
#define CT_GET_VALUE_MELEE_ATTACK		COLOR_WHITE "Melee attack:    " COLOR_RESET << this->melee_attack_damage
#define CT_GET_VALUE_RANGED_ATTACK		COLOR_WHITE "Ranged attack:   " COLOR_RESET << this->ranged_attack_damage 
#define CT_GET_VALUE_ARMOR_REDUCTION	COLOR_WHITE "Armor reduction: " COLOR_RESET << this->armor_damage_reduction


#endif
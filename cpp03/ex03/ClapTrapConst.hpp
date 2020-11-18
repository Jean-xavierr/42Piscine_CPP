/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrapConst.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 16:23:26 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/11/18 10:56:00 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAPCONST_HPP
#define CLAPTRAPCONST_HPP

#include "ClapTrap.hpp"
#include "GlobalTrap.hpp"

#define TEXT_PRESENTATION	"Je suis" << COLOR_GREEN " CL4P-TP "		\
	<< this->name << COLOR_RESET " une boite à chaussure multi-fonction !"

#define TEXT_RANGED_ATTACK	COLOR_GREEN << "CL4P-TP " << this->name 	\
	<< COLOR_RESET << " attaque " << COLOR_GREEN << target					\
	<< COLOR_RESET << " à distance, causant " << COLOR_RED 					\
	<< this->ranged_attack_damage << COLOR_RESET 							\
	<< " points de dégâts !"

#define TEXT_MELEE_ATTACK	COLOR_GREEN "CL4P-TP " << this->name 		\
	<< COLOR_RESET << " attaque " << COLOR_GREEN << target					\
	<< COLOR_RESET << " au corps à corps, causant " << COLOR_RED 			\
	<< this->melee_attack_damage << COLOR_RESET 							\
	<< " points de dégâts !"

#define TEXT_TAKE_DAMAGE 	COLOR_GREEN "CL4P-TP " << this->name 		\
	<< COLOR_RESET " à subi " << COLOR_RED 									\
	<< (amount - this->armor_damage_reduction) << COLOR_RESET 				\
	<< " points de dégâts !" << std::endl	<< "Point de vie " 				\
	<< this->name << ": " COLOR_GREEN << this->hit_points 					\
	<< COLOR_RESET

#define TEXT_NO_ENERGY	COLOR_GREEN "CL4P-TP " << this->name			\
	<< COLOR_RESET " n'a pu " COLOR_YELLOW "d'énergie"						\
	COLOR_RESET " ..."

#define TEXT_REPAIRED	COLOR_GREEN "CL4P-TP " << this->name << 		\
	COLOR_RESET " auto-répation " << COLOR_GREEN << amount 					\
	<< COLOR_RESET << " points de vie" 

/*
** Define for the getValue function
** To retrieve all the attributes of the ClapTrap Class
*/

#define GET_VALUE_NAME				COLOR_WHITE "Name:            " COLOR_RESET << this->name
#define GET_VALUE_HIT_POINT 		COLOR_WHITE "Life:            "	COLOR_RESET << this->hit_points	<< "/" << this->max_hit_points
#define GET_VALUE_ENERGY			COLOR_WHITE "Energy:          " COLOR_RESET	<< this->energy_points << "/" << this->max_hit_energy
#define GET_VALUE_LEVEL				COLOR_WHITE "Level:           " COLOR_RESET << this->level
#define GET_VALUE_MELEE_ATTACK		COLOR_WHITE "Melee attack:    " COLOR_RESET << this->melee_attack_damage
#define GET_VALUE_RANGED_ATTACK		COLOR_WHITE "Ranged attack:   " COLOR_RESET << this->ranged_attack_damage 
#define GET_VALUE_ARMOR_REDUCTION	COLOR_WHITE "Armor reduction: " COLOR_RESET << this->armor_damage_reduction


#endif
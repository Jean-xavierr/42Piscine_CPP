/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrapConst.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 17:55:18 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/13 16:11:46 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAPTRAPCONST_HPP
#define FRAPTRAPCONST_HPP

#include "FragTrap.hpp"
#include "GlobalTrap.hpp"

#define LEVEL 1
#define HIT_POINT 	100
#define ENERGY_POINTS 100
#define MAX_HIT_POINTS 100
#define MAX_HIT_ENERGY 100
#define MELEE_ATTACK_DAMAGE 30
#define RANGED_ATTACK_DAMAGE 20
#define ARMOR_DAMAGE_REDUCTION 5

/*
** Define for display messages 
** of the FrapTrap class
*/

#define TEXT_PRESENTATION	"Je suis" << COLOR_BLUE " FR4G-TP "		\
	<< this->name << COLOR_RESET " machine de mort sans pitié !"

#define TEXT_RANGED_ATTACK	COLOR_BLUE << "FR4G-TP " << this->name 	\
	<< COLOR_RESET << " attaque " << COLOR_BLUE << target			\
	<< COLOR_RESET << " à distance, causant " << COLOR_RED 			\
	<< this->ranged_attack_damage << COLOR_RESET 					\
	<< " points de dégâts !"

#define TEXT_MELEE_ATTACK	COLOR_BLUE "FR4G-TP " << this->name 	\
	<< COLOR_RESET << " attaque " << COLOR_BLUE << target			\
	<< COLOR_RESET << " au corps à corps, causant " << COLOR_RED 	\
	<< this->melee_attack_damage << COLOR_RESET 					\
	<< " points de dégâts !"

#define TEXT_TAKE_DAMAGE 	COLOR_BLUE "FR4G-TP " << this->name 	\
	<< COLOR_RESET " à subi " << COLOR_RED 							\
	<< (amount - this->armor_damage_reduction) << COLOR_RESET 		\
	<< " points de dégâts !" << std::endl	<< "Point de vie " 		\
	<< this->name << ": " COLOR_GREEN << this->hit_points 			\
	<< COLOR_RESET

#define TEXT_RANDOM_ATTACK	COLOR_BLUE "FR4G-TP " << this->name << 	\
	COLOR_RESET << " attaque " << COLOR_BLUE << target				\
	<< COLOR_RESET << random_attack << ", causant " 				\
	<< COLOR_RED << 35 << COLOR_RESET << " points de dégâts !" 

#define TEXT_NO_ENERGY	COLOR_BLUE "FR4G-TP " << this->name			\
	<< COLOR_RESET " n'a pu " COLOR_YELLOW "d'énergie"				\
	COLOR_RESET " ..."

#define TEXT_REPAIRED	COLOR_BLUE "FR4G-TP " << this->name << 		\
	COLOR_RESET " c'est revissé " COLOR_GREEN << random_piece 		\
	<< COLOR_RESET " ce qui lui rapporte " << COLOR_GREEN << amount	\
	<< COLOR_RESET << " points de vie"  

/*
** Define for the getValue function
** To retrieve all the attributes of the FrapTrap Class
*/

#define GET_VALUE_NAME				COLOR_WHITE "Name:            " COLOR_RESET << this->name
#define GET_VALUE_HIT_POINT 		COLOR_WHITE "Life:            "	COLOR_RESET << this->hit_points	<< "/" << this->max_hit_points
#define GET_VALUE_ENERGY			COLOR_WHITE "Energy:          " COLOR_RESET	<< this->energy_points << "/" << this->max_hit_energy
#define GET_VALUE_LEVEL				COLOR_WHITE "Level:           " COLOR_RESET << this->level
#define GET_VALUE_MELEE_ATTACK		COLOR_WHITE "Melee attack:    " COLOR_RESET << this->melee_attack_damage
#define GET_VALUE_RANGED_ATTACK		COLOR_WHITE "Ranged attack:   " COLOR_RESET << this->ranged_attack_damage 
#define GET_VALUE_ARMOR_REDUCTION	COLOR_WHITE "Armor reduction: " COLOR_RESET << this->armor_damage_reduction

#endif
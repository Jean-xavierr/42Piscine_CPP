/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrapChallenge.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 14:18:31 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/10 15:56:31 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void		ScavTrap::rockPaperScissors(std::string const target)
{
	std::cout << ST_TEXT_CHALLENGE_ROBOT << std::endl << "Pierre papier ciseaux !" << std::endl;
}

void		ScavTrap::askMyLittleFinger(std::string const target)
{
	std::cout << ST_TEXT_CHALLENGE_ROBOT << std::endl;
	std::cout << "Attend je demande à mon petit doigt !" << std::endl \
	<< COLOR_YELLOW "Petit doigt:" COLOR_RESET " Ne le laisse pas rentrer." << std::endl \
	<< COLOR_CYAN "SC4V-TP " << this->name << COLOR_RESET << ": pourrais-tu aller voir plus loin si on y est ..." << std::endl;
}

void		ScavTrap::youLoose(std::string const target)
{
	std::cout << ST_TEXT_CHALLENGE_ROBOT << std::endl \
	<< "Zap ! Psit ! Hop-là ! Ta perdu ! Et ne revient pas ..." << std::endl;
}

void		ScavTrap::findMyBirthday(std::string const target)
{
	std::cout << ST_TEXT_CHALLENGE_ROBOT << std::endl \
	<< "Devine la date de mon anniversaire ! Tu n'as pas d'idée ? .... Moi non plus." << std::endl;
}

void		ScavTrap::noChallenge(std::string const target)
{
	std::cout << ST_TEXT_CHALLENGE_ROBOT << std::endl	\
	<< "Vas-y, éblouis moi ! ... Ah ce n'était pas terrible." << std::endl;
}
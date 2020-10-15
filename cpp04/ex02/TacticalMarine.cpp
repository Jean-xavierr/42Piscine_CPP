/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 14:30:51 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/15 14:40:38 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
	std::cout <<  "Tactical Marine ready for action !" << std::endl;
	return ;
}

TacticalMarine::TacticalMarine(TacticalMarine const &src)
{
	*this = src;
	return ;
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh ..." << std::endl;
	return ;
}

TacticalMarine	&TacticalMarine::operator=(TacticalMarine const &src)
{
	(void)src;
	return (*this);
}

ISpaceMarine*	TacticalMarine::clone() const
{
	ISpaceMarine	*cloneUnit = new TacticalMarine(*this);
	return cloneUnit;
}

void			TacticalMarine::battleCry() const
{
	std::cout << "For the Holy PLOT !" << std::endl;
	return ;
}

void			TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
	return ;
}

void			TacticalMarine::meleeAttack() const
{
	std::cout <<  "* attacks with a chainsword *" << std::endl;
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 14:56:32 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/15 14:58:28 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
	return ;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &src)
{
	*this = src;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I’ll be back ..." << std::endl;
	return ;
}

AssaultTerminator	&AssaultTerminator::operator=(AssaultTerminator const &src)
{
	(void)src;
	return (*this);
}

ISpaceMarine*	AssaultTerminator::clone() const
{
	ISpaceMarine	*cloneUnit = new AssaultTerminator(*this);
	return cloneUnit;
}

void			AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. Purify it !" << std::endl;
	return ;
}

void			AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
	return ;
}

void			AssaultTerminator::meleeAttack() const
{
	std::cout <<  "* attaque with chainfists *" << std::endl;
	return ;
}
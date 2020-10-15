/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 12:37:21 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/15 15:26:45 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int		main(void)
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* boby = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISpaceMarine* jimy = new AssaultTerminator;
	
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(boby);
	vlc->push(jimy);
	std::cout << vlc->getCount() << std::endl;
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	return 0;
}
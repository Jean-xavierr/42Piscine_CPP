/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 18:14:30 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/13 18:55:50 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int		main(void)
{
	Sorcerer	robert("Robert", "the Magnificent");
	Victim		jim("Jimmy");
	Victim		*joe = new Peon("Joe");

	std::cout << robert << jim << *joe;

	robert.polymorph(jim);
	robert.polymorph(*joe);
	delete joe;
	return 0;
}
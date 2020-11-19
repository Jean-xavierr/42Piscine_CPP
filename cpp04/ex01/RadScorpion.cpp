/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 14:44:56 by jereligi          #+#    #+#             */
/*   Updated: 2020/11/19 12:12:24 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
	return ;
}

RadScorpion::RadScorpion(RadScorpion const &src) : Enemy(src)
{
	std::cout << "* click click click *" << std::endl;
	return ;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
	return ;
}

RadScorpion	&RadScorpion::operator=(RadScorpion const &src)
{
	this->hp = src.hp;
	this->type = src.type;
	return (*this);
}
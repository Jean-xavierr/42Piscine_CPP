/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 15:30:57 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/06 16:33:01 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	Pony::draw_pony(std::string unicorn)
{
	if (unicorn.compare("Yes") == 0)
	{
		std::cout << ",~~_" << std::endl;
		std::cout << "|/\\ =_ _ ~" << std::endl;
		std::cout << " _( )_( )\\~~" << std::endl;
		std::cout << " \\,\\  _|\\ \\~~~" << std::endl;
		std::cout << "    \\`   \\" << std::endl;
	}
	else
	{
		std::cout << "	    .''" << std::endl;
		std::cout << "  ._.-.___.' (`\\" << std::endl;
		std::cout << " //(        ( `'" << std::endl;
		std::cout << "'/ )\\ ).__. ) " << std::endl;
		std::cout << "' <' `\\ ._/'\\" << std::endl;
		std::cout << "   `   \\     \\" << std::endl;
	}
}

Pony::Pony(std::string name, std::string color, int weight, std::string unicorn, int age) 
: name(name), color(color), weight(weight), unicorn(unicorn), age(age)
{
	draw_pony(unicorn);
	std::cout << "Pony create" << std::endl;
	std::cout << "Name	: " << name << std::endl;
	std::cout << "Color	: " << color << std::endl;
	std::cout << "Weight	: " << weight << std::endl;
	std::cout << "Unicorn	: " << unicorn << std::endl;
	std::cout << "Age 	: " << age << std::endl << std::endl;
	return ;
}

Pony::~Pony(void)
{
	std::cout << "Pony " << this->name << " lost..." << std::endl << std::endl;
	return ;
}
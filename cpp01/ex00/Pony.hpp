/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 15:31:00 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/06 17:32:08 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

#include <string>
#include <iostream>

class Pony
{
private:
	/* data */
public:

	std::string	name;
	std::string	color;
	std::string	unicorn;
	int			weight;
	int			age;

	Pony(std::string name, std::string color, std::string unicorn, int weight, int age);
	~Pony();
	void	draw_pony(std::string unicorn);
};

#endif
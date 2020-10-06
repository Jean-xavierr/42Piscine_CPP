/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 15:31:00 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/06 16:30:33 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	Pony(std::string name, std::string color, int weight, std::string unicorn, int age);
	~Pony();
	void	draw_pony(std::string unicorn);
};

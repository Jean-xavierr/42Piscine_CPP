/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 15:31:03 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/06 16:35:21 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack(std::string name, std::string color, int weight,
std::string unicorn, int age)
{
	Pony	pony(name, color, weight, unicorn, age);
	return ;
}

void	ponyOnTheHeap(std::string name, std::string color, int weight,
std::string unicorn, int age)
{
	Pony	*pony = new Pony(name, color, weight, unicorn, age);
	delete pony;
	return ;
}


int			main(void)
{
	ponyOnTheStack("Hercule", "Brown", 150, "Yes", 5);
	ponyOnTheHeap("Medusa", "Green", 70, "No", 2);
	ponyOnTheHeap("Thor", "Dark", 500, "No", 99);
	ponyOnTheStack("Athena", "Pink", 10, "Yes", 20);
	return 0;
}
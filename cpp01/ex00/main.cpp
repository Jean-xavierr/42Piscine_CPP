/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 15:31:03 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/06 17:08:06 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack(std::string name, std::string color, std::string unicorn,
int weight, int age)
{
	Pony	pony(name, color, unicorn, weight, age);
	return ;
}

void	ponyOnTheHeap(std::string name, std::string color, std::string unicorn,
int weight, int age)
{
	Pony	*pony = new Pony(name, color, unicorn,  weight, age);
	delete pony;
	return ;
}


int			main(void)
{
	ponyOnTheStack("Hercule", "Brown", "Yes", 150, 5);
	ponyOnTheHeap("Medusa", "Green", "No", 70, 2);
	ponyOnTheHeap("Thor", "Dark", "No", 500, 99);
	ponyOnTheStack("Athena", "Pink", "Yes", 10, 20);
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:45:00 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/11/03 17:41:57 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int		main(void)
{
	int	myints[] = {0, 2, 4, 6, 8};
	std::list<int>	l(myints, myints + 5);
	std::vector<int> v;

	for (int i = 1; i <= 9; i += 2)
		v.push_back(i);

	// std::list<int>::iterator	it;
	// std::list<int>::iterator	ite = l.end();
	// for (it = l.begin(); it != ite; it++)
	// 	std::cout << *it << std::endl;

	std::cout << "Test with a container <list>" << std::endl;
	try {
		std::cout << "Try : easyfind(l, 6) : " << easyfind(l, 6) << std::endl;}
	catch(const std::exception& e)	{
		std::cerr << "Exception: No occurrence" << std::endl;}
	try {
		std::cout << "Try : easyfind(l, 50) : ";
		easyfind(l, 50);}
	catch(const std::exception& e)	{
		std::cerr << "Exception: No occurrence" << std::endl << std::endl;}

	std::cout << "Test with a container <vector>" << std::endl;
	try {
		std::cout << "Try : easyfind(v, 7) : " << easyfind(v, 7) << std::endl;}
	catch(const std::exception& e)	{
		std::cerr << "Exception: No occurrence" << std::endl;}
	try {
		std::cout << "Try : easyfind(v, 2) : ";
		easyfind(v, 2);}
	catch(const std::exception& e)	{
		std::cerr << "Exception: No occurrence" << std::endl << std::endl;}
	
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 12:27:20 by jereligi          #+#    #+#             */
/*   Updated: 2020/11/21 15:24:47 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.cpp"

int			main(void)
{
	unsigned int	i;
	Array<int>		tab(5);
	Array<char>		tab_char(3);
	Array<char>		tab_char2(3);
	Array<float>	tab_float;

	tab[0] = 0;
	tab[1] = 1;
	tab[2] = 2;
	tab[3] = 3;
	tab[4] = 4;
	
	std::cout << "--- Test 1 ---" << std::endl;
	std::cout << "size: " << tab.getSize() << std::endl;
	for (i = 0; i < tab.getSize(); i++)
	{
		if (i == 0)
			std::cout << "value: [";
		if (i >= 0 && i < (tab.getSize() - 1))
			std::cout << tab[i] << ", ";
		else
			std::cout << tab[i] << "]" << std::endl;
	}
	try
	{
		std::cout << tab[5] << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << "Error: array index out of range" << std::endl;
	}
	

	tab_char[0] = 'a';
	tab_char[1] = 'b';
	tab_char[2] = 'c';
	std::cout << std::endl << std::endl;
	std::cout << "--- Test 2 ---" << std::endl;
	std::cout << "size: " << tab_char.getSize() << std::endl;
	for (i = 0; i < tab_char.getSize(); i++)
	{
		if (i == 0)
			std::cout << "value: [";
		if (i >= 0 && i < (tab_char.getSize() - 1))
			std::cout << tab_char[i] << ", ";
		else
			std::cout << tab_char[i] << "]" << std::endl;
	}
	try
	{
		std::cout << tab_char[5] << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << "Error: array index out of range" << std::endl;
	}

	std::cout << std::endl << std::endl;
	std::cout << "--- Test 3 ---" << std::endl;
	try {
		std::cout << tab_float[0] << std::endl;}
	catch(std::exception const &e) {
		std::cerr << "Error: array index out of range" << std::endl;}

	std::cout << std::endl << std::endl;
	std::cout << "--- Test 4 ---" << std::endl;
	std::cout << "assignation (=) tab_char2 = tab_char" << std::endl;
	tab_char2 = tab_char;
	for (i = 0; i < tab_char2.getSize(); i++)
	{
		if (i == 0)
			std::cout << "value: [";
		if (i >= 0 && i < (tab_char2.getSize() - 1))
			std::cout << tab_char2[i] << ", ";
		else
			std::cout << tab_char2[i] << "]" << std::endl;
	}

	std::cout << std::endl << std::endl;
	std::cout << "--- Test 5 ---" << std::endl;
	std::cout << "constructor copy tab_char3(tab_char2)" << std::endl;
	Array<char>		tab_char3(tab_char2);
	for (i = 0; i < tab_char3.getSize(); i++)
	{
		if (i == 0)
			std::cout << "value: [";
		if (i >= 0 && i < (tab_char3.getSize() - 1))
			std::cout << tab_char3[i] << ", ";
		else
			std::cout << tab_char3[i] << "]" << std::endl;
	}
	return 0;
}
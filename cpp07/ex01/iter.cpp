/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 11:28:39 by jereligi          #+#    #+#             */
/*   Updated: 2020/11/23 16:31:35 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void	iter(T *tab, int size, void (*f)(T &tab))
{
	for (int i = 0; i < size; i++)
		f(tab[i]);
	return ;
}

template <typename T>
void		funct_addOne(T &tab)
{
	tab += 1;
}

template <typename T>
void		funct_capitalizer(T &tab)
{
	if (tab >= 'a' && tab <= 'z')
		tab -= 32;
}

int			main(void)
{
	int		i;
	int		tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	char	tab2[6] = {"Hello"};
	int		size = 10;

	iter<int>(tab, size, &funct_addOne);
	for (i = 0; i < size; i++)
		std::cout << tab[i] << std::endl;
	std::cout << std::endl;

	iter<char>(tab2, 5, &funct_capitalizer);
	for (i = 0; i < 5; i++)
		std::cout << tab2[i];
	std::cout << std::endl;
	return 0;
}
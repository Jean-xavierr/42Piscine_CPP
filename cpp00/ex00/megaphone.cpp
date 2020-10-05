/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 17:01:51 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/05 18:37:12 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define TEXT "* LOUD AND UNEARABLE FEEDBACK NOISE *"

void	megaphone(char *s)
{
	int		i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		std::cout << s[i];
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac < 2)
		std::cout << TEXT << std::endl;
	else
	{
		av++;
		while (*av)
		{
			megaphone(*av);
			std::cout << " ";
			av++;
		}
		std::cout << std::endl;
	}	
	return 0;
}
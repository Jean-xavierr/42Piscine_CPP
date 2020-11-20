/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conv.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 15:32:58 by jereligi          #+#    #+#             */
/*   Updated: 2020/11/20 12:19:14 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <iomanip>
#include <cctype>

void		convert_int(double n, std::string s)
{

	if (!isdigit(s[0]) && (s.length() >= 3))
		std::cout << "int: impossible" << std::endl;
	else
		if (n > 2147483647  || n < -2147483648)
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(n) << std::endl;
}

void		convert_char(double n, std::string s)
{

	if (!isdigit(s[0]) && (s.length() >= 3))
		std::cout << "char: impossible" << std::endl;
	else if (n > 32 && n < 127)
		std::cout << "char: '" << static_cast<char>(n) << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

int			main(int ac, char **av)
{
	if (ac != 2)
		std::cout << "Usage: ./convert [number]" << std::endl;
	else
	{
		std::string			s;
		double				n;
		
		s = av[1];
		if (!isdigit(s[0]) && s.length() == 1)
			n = static_cast<int>(s[0]);
		else
			n = atof(av[1]);
		convert_char(n, s);
		convert_int(n, s);
		std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(n) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(n) << std::endl;
	}
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conv.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 15:32:58 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/23 15:29:57 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <iomanip>
#include <cctype>

void		convert_int(double n, std::stringstream &ss)
{
	if (!isdigit(ss.str()[0]))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(n) << std::endl;
}

void		convert_char(double n, std::stringstream &ss)
{
	if (!isdigit(ss.str()[0]))
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
		std::stringstream	ss(av[1]);
		double				n;
		ss >> n;

		convert_char(n, ss);
		convert_int(n, ss);
		std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(n) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(n) << std::endl;
	}
	return 0;
}
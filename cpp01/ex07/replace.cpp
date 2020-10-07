/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 18:07:52 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/07 21:18:35 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void		print_usage(void)
{
	std::cout << "Usage :" << std::endl;
	std::cout << "./replace file_name s1 s2" << std::endl;
}

void		replace(std::string path, std::string s1, std::string s2)
{
	int				index;
	std::string		line;
	std::ifstream	file;
	std::ofstream	new_file;

	file.open(path);
	new_file.open(path + ".replace");
  	if (file.is_open())
  	{
		if (new_file.is_open())
		{
			while (std::getline (file, line))
    		{
				while ((index = line.find(s1)) != -1)
					line.replace(index, s1.length() , s2);
				new_file << line << std::endl;
    		}
    		file.close();
			new_file.close();
		}
		else
			std::cout << "Unable to open new_file" << std::endl;
 	}
	else 
		std::cout << "Unable to open file" << std::endl;
}

int			main(int ac, char **av)
{
	if (ac != 4)
		print_usage();
	else
	{
		if (!*av[2])
			std::cout << "Error: s1 must not be empty" << std::endl;
		else if (!*av[3])
			std::cout << "Error: s2 must not be empty" << std::endl;
		else
			replace(av[1], av[2], av[3]);
	}
	return 0;
}
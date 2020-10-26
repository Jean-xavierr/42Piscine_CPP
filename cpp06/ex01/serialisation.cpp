/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialisation.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 11:48:46 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/26 15:54:40 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>

struct Data
{
	std::string s1;
	int			n;
	std::string	s2;
};

/*
**	8 bytes for char / 4 bytes for int / 8 bytes for char 
*/

void		*serialize(void)
{
	int i;
	char *raw = new char[20];
	char alphanumeric[63] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	for (i = 0; i < 8; i++)
		raw[i] = alphanumeric[rand() % 62];
	*reinterpret_cast<int *>(raw + 8) = rand() % 2147483647;
	for (i = 12; i < 20; i++)
		raw[i] = alphanumeric[rand() % 62];
	raw[19] = '\0'; 
	return static_cast<void *>(raw);
}

Data		*deserialize(void *raw)
{
	char	*s;
	Data	*data = new Data;

	s = reinterpret_cast<char *>(raw);
	data->s1 = std::string(s, 8);
	data->s2 = std::string(s + 12, 8);
	data->n = *reinterpret_cast<int *>(s + 8);
	return data;
}

int			main(void)
{
	void		*raw;
	Data		*data;

	srand(time(NULL));
	raw = serialize();
	data = deserialize(raw);

	std::cout << "Data n:  " << data->n << std::endl;
	std::cout << "Data s1: " << data->s1 << std::endl;
	std::cout << "Data s2: " << data->s2 << std::endl;

	delete static_cast<char *>(raw);
	delete data;
	return 0;
}
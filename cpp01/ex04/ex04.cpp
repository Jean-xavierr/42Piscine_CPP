/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 11:01:53 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/07 11:05:19 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*str1 = &str;
	std::string		&str2 = str;

	std::cout << "Ceci est un pointeur : " << *str1 << std::endl;
	std::cout << "Ceci est une reference : " << str2 << std::endl;
	return 0;
}
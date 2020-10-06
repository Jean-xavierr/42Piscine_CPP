/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 21:46:12 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/06 12:27:44 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.hpp"

void		display_phonebook(void)
{
	std::cout << "======================== " << std::endl;
	std::cout << "Welcome to Phonebook CPP " << std::endl;
	std::cout << "======================== " << std::endl << std::endl;
}

void		display_search(void)
{
	std::cout << clear_terminal;
	std::cout << display_line << std::endl;
	std::cout << "|    index   |" << " first name |";
	std::cout << " last  name |" << "  nickname  |" << std::endl;
	std::cout << display_line << std::endl;
}

void		display_contact(int i, std::string first_name, std::string last_name, std::string nickname)
{
	std::cout << "| " << std::setw(10) << i << " | ";
	std::cout << std::setw(10) << first_name << " | ";
	std::cout << std::setw(10) << last_name << " | ";
	std::cout << std::setw(10) << nickname << " | " << std::endl;
}
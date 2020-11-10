/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 19:06:36 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/11/10 11:10:07 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.hpp"

void		add_contact(Phonebook *contact, int *index)
{	
	if (*index >= 8)
		std::cout << phonebook_complete << std::endl;
	else
	{
		contact[*index].add_contact();
		*index += 1;
	}
}

void		get_contact(Phonebook contact, std::string *first_name, 
std::string	*last_name, std::string	*nickname)
{
	if (contact.first_name.length() > 10)
		first_name->replace(0, 9, contact.first_name, 0, 9);
	else
		*first_name = contact.first_name;
	if (contact.last_name.length() > 10)
		last_name->replace(0, 9, contact.last_name, 0, 9);
	else
		*last_name = contact.last_name;
	if (contact.nickname.length() > 10)
		nickname->replace(0, 9, contact.nickname, 0, 9);
	else
		*nickname = contact.nickname;
}

void		select_index(Phonebook *contact, int *index)
{
	std::string		buf;
	
	while (1)
	{
		std::cout << "Select the index of the contact you want to see : ";
		std::getline (std::cin, buf);
		if ( buf.length() == 1 && buf[0] >= '0' && buf[0] <= '7')
		{
			if (buf[0] - 48 >= *index)
				std::cout << "The contact does not exist, enter a correct index" << std::endl;
			else
			{
				contact[buf[0] - 48].print_contact();
				break ;
			}
		}
		else
			std::cout << "Choose an index between 0 and 7" << std::endl;
	}
}

void		search_contact(Phonebook *contact, int *index)
{
	int			i = 0;
	int			n = 0;
	std::string	first_name	("         .");
	std::string	last_name	("         .");
	std::string	nickname	("         .");

	if (*index > 0)
	{
		display_search();
		while (i < *index)
		{
			get_contact(contact[i], &first_name, &last_name, &nickname);
			display_contact(i, first_name, last_name, nickname);
			i++;
		}
		std::cout << display_line << std::endl << std::endl;
		select_index(contact, index);
		std::cout << std::endl;
	}
}

int			check_argument(Phonebook *contact, int *index, std::string buf)
{
	std::string add 	("ADD");
	std::string	search	("SEARCH");
	std::string exit	("EXIT");

	if (!add.compare(buf))
		add_contact(contact, index);
	else if (!search.compare(buf))
		search_contact(contact, index);
	else if (!exit.compare(buf))
		return 0;
	return 1;
}

int			main(void)
{
	int			index = 0;
	int			if_exit = 1;
	Phonebook	contact[8];
	std::string buf;
	
	display_phonebook();
	while (if_exit)
	{
		std::cout << display_choose_option;
		std::getline (std::cin, buf);
		if_exit = check_argument(contact, &index, buf);
	}
	return 0;
}
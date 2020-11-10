/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 19:07:23 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/11/10 13:06:03 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "global.hpp"

class Phonebook
{

public:
	
	void			add_contact(void);
	void			print_contact(void);
	std::string		getFirstName(void) const;
	std::string		getLastName(void) const;
	std::string		getNickName(void) const;

private:

	std::string		first_name;
	std::string		last_name;
	std::string		nickname;
	std::string		login;
	std::string		address;
	std::string		phone_number;
	std::string		birthday_date;
	std::string		favorite_meal;
	std::string		underwear_color;
	std::string		darkest_secret;

};

#endif
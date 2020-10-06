/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 19:07:20 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/06 14:12:07 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.hpp"

void		Phonebook::print_contact(void)
{
	std::cout << "First name	:" << this->first_name << std::endl;
	std::cout << "Last name	:" << this->last_name << std::endl;
	std::cout << "Nickname	:" << this->nickname << std::endl;
	std::cout << "Login		:" << this->login << std::endl;
	std::cout << "Address		:" << this->address << std::endl;
	std::cout << "Phone number	:" << this->phone_number << std::endl;
	std::cout << "Birthday date	:" << this->birthday_date << std::endl;
	std::cout << "Favorite meal	:" << this->favorite_meal << std::endl;
	std::cout << "Underwear color	:" << this->underwear_color << std::endl;
	std::cout << "Darkest secret	:" << this->darkest_secret << std::endl;
}

void		Phonebook::add_contact(void)
{
	std::cout << "Enter the first name of the contact : ";
	std::getline (std::cin, this->first_name);
	std::cout << "Enter the last name of the contact : ";
	std::getline (std::cin, this->last_name);
	std::cout << "Enter the nickname of the contact : ";
	std::getline (std::cin, this->nickname);
	std::cout << "Enter the login of the contact : ";
	std::getline (std::cin, this->login);
	std::cout << "Enter address of the contact : ";
	std::getline (std::cin, this->address);
	std::cout << "Enter phone number of the contact : ";
	std::getline (std::cin, this->phone_number);
	std::cout << "Enter birthday date of the contact : ";
	std::getline (std::cin, this->birthday_date);
	std::cout << "Enter favorite meal of the contact : ";
	std::getline (std::cin, this->favorite_meal);
	std::cout << "Enter underwear color of the contact : ";
	std::getline (std::cin, this->underwear_color);
	std::cout << "Enter darkest secret of the contact : ";
	std::getline (std::cin, this->darkest_secret);
	std::cout << std::endl;
	std::cout << clear_terminal;
	std::cout << "Conctat ADD : " << this->first_name << " " << this->last_name << std::endl;
	return ;
}
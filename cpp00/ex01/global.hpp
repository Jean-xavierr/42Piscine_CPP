/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   global.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 19:05:39 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/11/09 16:22:48 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GLOBAL_HPP
#define GLOBAL_HPP

#include <iostream>
#include <istream>
#include <iomanip>
#include <string>
#include "Phonebook.hpp"

#define 	display_choose_option "Enter the action you want to perform [ADD|SEARCH|EXIT]: "
#define		phonebook_complete "your phonebook is complete, please purchase the extension at $ 9.99"
#define		display_line " ---------------------------------------------------"
#define		clear_terminal "\x1B[2J\x1B[H"

void		display_phonebook(void);
void		display_search(void);
void		display_contact(int i, std::string first_name,
			std::string last_name, std::string nickname);

#endif
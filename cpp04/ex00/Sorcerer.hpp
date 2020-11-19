/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 16:58:09 by jereligi          #+#    #+#             */
/*   Updated: 2020/11/19 10:39:22 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include <sstream>
#include "Victim.hpp"

class	Sorcerer
{
public:

	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const &src);
	Sorcerer &operator=(Sorcerer const &src);
	virtual ~Sorcerer();

	std::string		getName(void) const;
	std::string		getTitle(void) const;
	void			polymorph(Victim const &victim) const;

private:
	Sorcerer(void);
	std::string		name;
	std::string		title;

};

std::ostream	&operator<<(std::ostream &p, Sorcerer const &i);

#endif

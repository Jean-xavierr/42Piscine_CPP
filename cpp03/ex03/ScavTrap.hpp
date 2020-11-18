/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 10:56:29 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/11/18 15:08:06 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <sstream>
#include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap
{
public:

	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &src);
	virtual ~ScavTrap();

	ScavTrap	&operator=(ScavTrap const &src);
	void		init_var(void);
	void		challengeNewcomer(std::string const &target);

	void		rockPaperScissors(std::string const target);
	void		askMyLittleFinger(std::string const target);
	void		youLoose(std::string const target);
	void		findMyBirthday(std::string const target);
	void		noChallenge(std::string const target);

private:
	/* data */
};

std::ostream	&operator<<(std::ostream &o, ScavTrap const &src);

#endif

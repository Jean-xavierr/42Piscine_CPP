/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 11:30:01 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/11/18 15:08:19 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <sstream>
#include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
public:

	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &src);
	virtual ~FragTrap();

	FragTrap	&operator=(FragTrap const &src);
	void		init_var(void);
	void		vaulthunter_dot_exe(std::string const &target);

private:
	/* data */
};

std::ostream	&operator<<(std::ostream &o, FragTrap const &src);

#endif
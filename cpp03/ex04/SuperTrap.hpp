/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 14:45:54 by jereligi          #+#    #+#             */
/*   Updated: 2020/11/18 11:34:53 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include <iostream>
#include <sstream>
#include "NinjaTrap.hpp"

class	SuperTrap : public FragTrap, public NinjaTrap
{
public:

	SuperTrap(void);
	SuperTrap(std::string name);
	SuperTrap(SuperTrap const &src);
	SuperTrap &operator=(SuperTrap const &src);
	virtual ~SuperTrap();

	void			init_var(void);
	void			rangedAttack(std::string const &target) const;
	void			meleeAttack(std::string const &target) const;

};

std::ostream	&operator<<(std::ostream &o, SuperTrap const &instance);

#endif
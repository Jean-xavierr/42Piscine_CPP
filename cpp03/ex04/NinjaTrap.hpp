/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 12:02:19 by jereligi          #+#    #+#             */
/*   Updated: 2020/11/18 11:25:09 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include <iostream>
#include <sstream>
#include "GlobalTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class	NinjaTrap : virtual public ClapTrap
{
public:

	NinjaTrap(void);
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const &src);
	NinjaTrap &operator=(NinjaTrap const &src);
	virtual ~NinjaTrap();

	void		init_var(void);
	void 		ninjaShoebox(NinjaTrap &trap);
    void 		ninjaShoebox(ScavTrap &trap);
    void 		ninjaShoebox(FragTrap &trap);

private:

};

std::ostream	&operator<<(std::ostream &o, NinjaTrap const &i);

#endif
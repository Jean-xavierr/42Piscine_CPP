/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 18:35:59 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/13 19:03:48 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class	Peon : public Victim
{
public:

	Peon(void);
	Peon(std::string name);
	Peon(Peon const &src);
	Peon &operator=(Peon const &src);
	virtual ~Peon();

	virtual std::string		getName(void) const;
	virtual void			getPolymorphed(void) const;

private:
};

std::ostream	&operator<<(std::ostream &o, Peon const &i);

#endif
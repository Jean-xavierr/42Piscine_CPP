/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 18:20:16 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/13 19:02:54 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>
#include <sstream>

class	Victim
{
public:

	Victim(void);
	Victim(std::string name);
	Victim(Victim const &src);
	Victim &operator=(Victim const &src);
	virtual ~Victim();

	virtual std::string		getName(void) const;
	virtual void			getPolymorphed(void) const;

protected:
	std::string name;

private:

};

std::ostream	&operator<<(std::ostream &o, Victim const &i);

#endif
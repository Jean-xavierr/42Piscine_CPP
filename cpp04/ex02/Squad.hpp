/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 11:54:04 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/15 15:24:51 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

#include <iostream>
#include <sstream>
#include "ISquad.hpp"

class	Squad : public ISquad
{
public:

	Squad(void);
	Squad(Squad const &src);
	Squad &operator=(Squad const &src);
	virtual ~Squad();

	virtual int getCount() const;
	virtual	ISpaceMarine *getUnit(int) const;
	virtual int push(ISpaceMarine*);

protected:
	int				count;
	ISpaceMarine	**units;

private:


};

#endif
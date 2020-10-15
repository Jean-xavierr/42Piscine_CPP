/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 11:43:13 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/15 11:49:38 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

#include "ISpaceMarine.hpp"

class ISquad
{

public:

	virtual	~ISquad() {}
	virtual int getCount() const = 0;
	virtual	ISpaceMarine *getUnit(int) const = 0;
	virtual int push(ISpaceMarine*) = 0;
};

#endif
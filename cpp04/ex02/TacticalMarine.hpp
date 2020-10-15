/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 12:45:11 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/15 12:48:06 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class	TacticalMarine : public ISpaceMarine
{
public:

	TacticalMarine(void);
	TacticalMarine(TacticalMarine const &src);
	TacticalMarine &operator=(TacticalMarine const &src);
	virtual ~TacticalMarine();

	virtual ISpaceMarine* clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;

protected:

private:

};

#endif
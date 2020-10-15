/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 14:54:28 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/15 14:56:25 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class	AssaultTerminator : public ISpaceMarine
{
public:

	AssaultTerminator(void);
	AssaultTerminator(AssaultTerminator const &src);
	AssaultTerminator &operator=(AssaultTerminator const &src);
	virtual ~AssaultTerminator();

	virtual ISpaceMarine* clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;

protected:

private:

};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 17:04:40 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/16 11:54:06 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
class AMateria; // forward declarations
#include "ICharacter.hpp"

class	AMateria
{
public:

	AMateria(std::string const & type);
	AMateria(AMateria const &src);
	AMateria &operator=(AMateria const &src);
	virtual ~AMateria();

	std::string const		&getType() const;
	unsigned int			getXP() const;
	virtual AMateria		*clone() const = 0;
	virtual void			use(ICharacter &target);

protected:
	std::string		type;
	unsigned int	xp;

private:
	AMateria(void);

};

#endif
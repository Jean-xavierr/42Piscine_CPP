/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 17:14:10 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/15 17:45:04 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class	Ice : public AMateria
{
public:

	Ice(void);
	Ice(Ice const &src);
	Ice &operator=(Ice const &src);
	virtual ~Ice();

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);

protected:

private:

};

#endif
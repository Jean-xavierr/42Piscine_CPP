/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 17:22:10 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/15 17:45:08 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class	Cure : public AMateria
{
public:

	Cure(void);
	Cure(Cure const &src);
	Cure &operator=(Cure const &src);
	virtual ~Cure();

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);

protected:

private:

};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 17:41:21 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/15 18:39:05 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Character_HPP
# define Character_HPP

#include "ICharacter.hpp"

class	Character : public ICharacter
{
public:

	Character(std::string name);
	Character(Character const &src);
	Character &operator=(Character const &src);
	virtual ~Character();

	virtual std::string const	&getName() const;
	virtual void	equip(AMateria* m);
	virtual void	unequip(int idx);
	virtual void	use(int idx, ICharacter& target);

protected:
	std::string		name;
	AMateria		*inventory[4];
	unsigned int	countMateria;

private:
	Character(void);

};

#endif
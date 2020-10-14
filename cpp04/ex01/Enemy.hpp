/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 12:35:52 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/14 14:30:50 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>
#include <sstream>

class	Enemy
{
public:

	Enemy(void);
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const &src);
	Enemy &operator=(Enemy const &src);
	virtual ~Enemy();

	std::string const	getType() const;
	int					getHP() const;
	virtual void		takeDamage(int);
	std::string			getValues(void) const;

protected:

	int				hp;
	std::string		type;

private:

};

std::ostream	&operator<<(std::ostream &o, Enemy const &i);

#endif
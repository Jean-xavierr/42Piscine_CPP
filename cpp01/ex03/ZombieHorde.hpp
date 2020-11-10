/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 10:40:28 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/11/10 16:29:03 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
public:

	ZombieHorde(int n);
	~ZombieHorde();
	std::string	random_name(void) const;
	void		announce(void) const;

private:
	
	Zombie	*horde;
	int		n;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 12:00:11 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/14 12:17:23 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include <iostream>
#include <sstream>
#include "AWeapon.hpp"

class	PlasmaRifle : public AWeapon
{
public:

	PlasmaRifle(void);
	PlasmaRifle(PlasmaRifle const &src);
	PlasmaRifle &operator=(PlasmaRifle const &src);
	virtual ~PlasmaRifle(void);

	virtual void	attack(void) const;

protected:

private:

};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 12:19:20 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/14 12:19:22 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include <iostream>
#include <sstream>
#include "AWeapon.hpp"

class	PowerFist : public AWeapon
{
public:

	PowerFist(void);
	PowerFist(PowerFist const &src);
	PowerFist &operator=(PowerFist const &src);
	virtual ~PowerFist();

	virtual void	attack(void) const;

protected:

private:

};

#endif
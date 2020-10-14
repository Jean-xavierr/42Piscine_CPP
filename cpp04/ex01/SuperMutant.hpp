/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 14:27:30 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/14 14:35:04 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include <iostream>
#include "Enemy.hpp"

class	SuperMutant : public Enemy
{
public:

	SuperMutant(void);
	SuperMutant(SuperMutant const &src);
	SuperMutant &operator=(SuperMutant const &src);
	virtual ~SuperMutant();

	virtual void	takeDamage(int);

protected:

private:

};

#endif
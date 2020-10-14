/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 14:43:22 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/14 14:44:28 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include "Enemy.hpp"

class	RadScorpion : public Enemy
{
public:

	RadScorpion(void);
	RadScorpion(RadScorpion const &src);
	RadScorpion &operator=(RadScorpion const &src);
	virtual ~RadScorpion();

protected:

private:

};

#endif
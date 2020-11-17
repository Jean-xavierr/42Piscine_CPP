/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 16:02:35 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/11/17 11:47:19 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed
{
public:

	Fixed();
	Fixed(const int nb);
	Fixed(const float nb);
	Fixed(Fixed const &instance);
	virtual ~Fixed();

	Fixed	&operator=(Fixed const &instance);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

private:
	
	int					value;
	const static int	number_bits = 8;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &instance);

#endif
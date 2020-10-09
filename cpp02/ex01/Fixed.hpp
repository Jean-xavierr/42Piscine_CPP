/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 16:02:35 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/09 10:37:49 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed
{
public:

	Fixed();
	Fixed(const int nb);
	Fixed(const float nb);
	Fixed(Fixed const &instance);
	~Fixed();

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
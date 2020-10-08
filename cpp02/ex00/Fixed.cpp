/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 16:02:33 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/08 17:26:18 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point = 0;
	return ;
}

Fixed::Fixed(Fixed const &instance)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = instance;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed		&Fixed::operator=(Fixed const &instance)
{
	std::cout << "Assignation operator called" << std::endl;
	this->fixed_point = instance.fixed_point;
	return *this;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixed_point;
}

void	Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw;
	return ;	
}

std::ostream	&operator<<(std::ostream &o, Fixed const &instance)
{
	o << instance.getRawBits() << std::endl;
	return o;
}
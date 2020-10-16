/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 15:37:54 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/16 15:41:26 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	return ;
}

Bureaucrat::Bureaucrat(std::string const name, unsigned int grade) : name(name)
{
	
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	*this = src;
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &src)
{
	return (*this);
}

std::string		const	Bureaucrat::getName(void) const
{

}

unsigned int			Bureaucrat::getGrade(void)	const
{

}

std::ostream	&operator<<(std::ostream &s, Bureaucrat const &i)
{
	s /*<< DATA*/ << std::endl;
	return s;
}
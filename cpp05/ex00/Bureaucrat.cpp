/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 15:37:54 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/19 14:13:50 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name),
grade(grade)
{
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
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
	this->grade = src.grade;
	return (*this);
}

std::string		const	Bureaucrat::getName(void) const
{
	return this->name;
}

int						Bureaucrat::getGrade(void)	const
{
	return this->grade;
}

void					Bureaucrat::incrementGrade(void)
{
	if (this->grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade -= 1;
}

void					Bureaucrat::decrementGrade(void)
{
	if (this->grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade += 1;
}

const char				*Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Error: Grade too high.";
}

const char				*Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Error: Grade too low.";
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &i)
{
	o << i.getName() << " bureaucrat grade <" << i.getGrade() << ">";
	return o;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 14:39:13 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/20 17:52:10 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int signGrade, int execGrade) : name(name),
signGrade(signGrade), execGrade(execGrade)
{
	if (this->signGrade < 1 || this->execGrade < 1)
		throw Form::GradeTooHighException();
	else if (this->signGrade > 150 || this->execGrade > 150)
		throw Form::GradeTooLowException();
	this->sign = false;
	return ;
}

Form::Form(Form const &src) : name(src.name), sign(src.sign), 
signGrade(src.signGrade), execGrade(src.execGrade)
{
	return ;
}

Form::~Form(void)
{
	return ;
}

Form	&Form::operator=(Form const &src)
{
	this->sign = src.sign;
	return (*this);
}

std::string const	Form::getName(void) const
{
	return this->name;
}

bool				Form::getSign(void) const
{
	return this->sign;
}

int					Form::getSignGrade(void) const
{
	return this->signGrade;
}

int					Form::getSignExec(void) const
{
	return this->execGrade;
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return "Error: Grade too high.";
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return "Error: Grade too low.";
}

const char	*Form::UnsignedForm::what() const throw()
{
	return "Error: Unsigned form";
}

void		Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->signGrade)
		throw Form::GradeTooLowException();
	this->sign = true;
}

void			Form::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->execGrade)
		throw Form::GradeTooLowException();
	else if (this->sign == false)
		throw Form::UnsignedForm();
}

std::ostream	&operator<<(std::ostream &o, Form const &i)
{
	o << "Form: " << i.getName() << std::endl << "signed: " << i.getSign() \
	<< std::endl << "signature grade: " << i.getSignGrade() << std::endl 	\
	<< "execution grade: " << i.getSignExec();
	return o;
}
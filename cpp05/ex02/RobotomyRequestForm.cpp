/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 15:10:11 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/20 16:05:43 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45),
target(target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : 
Form(src.target, 72, 45)
{
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	(void)src;
	return (*this);
}

void			RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << "Brrrrrzzzz Bbbbrrouzzzzzz Brrrrzzz Bbbbrrrouuuuuuzzz Brssss" \
	<< std::endl << this->target << " a bien été robotomizée" << std::endl;
}
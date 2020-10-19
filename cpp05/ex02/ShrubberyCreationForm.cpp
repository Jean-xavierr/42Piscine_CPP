/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 17:31:52 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/19 17:56:22 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137),
target(target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : 
Form(src.target, 145, 137)
{
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	(void)src;
	return (*this);
}

std::string				ShrubberyCreationForm::displayThree(void)
{
	return ;
}


void					ShrubberyCreationForm::createFile(void)
{
	std::ofstream	newFile;

	newFile.open(this->target + "_shrubbery");
	if (newFile.is_open())
	{
		newFile << this->displayThree();
	}
	else
	{
		/* error code */
	}
}
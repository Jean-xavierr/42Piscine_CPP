/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 11:09:37 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/21 15:39:14 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	return ;
}

Intern::Intern(Intern const &src)
{
	*this = src;
}

Intern::~Intern(void)
{
	return ;
}

Intern	&Intern::operator=(Intern const &src)
{
	(void)src;
	return (*this);
}

Form	*shruberryCreation(std::string target)
{
	Form	*tmp = new ShrubberyCreationForm(target);
	return tmp;
}

Form	*robotMyRequest(std::string target)
{
	Form	*tmp = new RobotomyRequestForm(target);
	return tmp;
}

Form	*presidentialPardon(std::string target)
{
	Form	*tmp = new PresidentialPardonForm(target);
	return tmp;
}

Form	*Intern::makeForm(std::string nameForm, std::string target)
{
	struct s_makeForms	makeForms[3] = {
	{"shrubbery creation",  shruberryCreation}, 
	{"robotomy request", robotMyRequest},
	{"presidential pardon", presidentialPardon}}; 

	for (int i = 0; i < 3; i++)
	{
		if (makeForms[i].form.compare(nameForm) == 0)
		{
			std::cout << "Intern creates " << nameForm << std::endl;
			return makeForms[i].makeForm(target);
		}
	}
	std::cout << "Error: Form name not correct [" << nameForm << "]" << std::endl;
	return NULL;
}

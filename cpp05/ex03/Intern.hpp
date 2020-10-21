/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 11:07:35 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/21 15:39:17 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class	Intern
{
public:

	Intern(void);
	Intern(Intern const &src);
	Intern &operator=(Intern const &src);
	virtual ~Intern();
	Form	*makeForm(std::string nameForm, std::string target);

private:

};

struct		s_makeForms
{
	std::string		form;
	Form			*(*makeForm)(std::string);
};

#endif
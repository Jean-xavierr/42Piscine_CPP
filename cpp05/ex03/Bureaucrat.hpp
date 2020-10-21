/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 15:35:40 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/20 15:49:20 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
class Form;
#include "Form.hpp"

class Bureaucrat
{
public:

	Bureaucrat(std::string const name, int grade);
	Bureaucrat(Bureaucrat const &src);
	virtual ~Bureaucrat();
	Bureaucrat &operator=(Bureaucrat const &src);

	std::string const	getName(void) const;
	int 				getGrade(void) const;
	void 				incrementGrade(void);
	void 				decrementGrade(void);
	void				signForm(Form &form);
	class GradeTooHighException: public std::exception {
		virtual const char *what() const throw();
	};
	class GradeTooLowException: public std::exception {
		virtual const char *what() const throw();
	};
	void		executeForm(Form const &form);

private:

	Bureaucrat();

	std::string const	name;
	int 				grade;
};

std::ostream 	&operator<<(std::ostream &o, Bureaucrat const &i);

#endif
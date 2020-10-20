/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 14:23:57 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/20 16:03:51 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
class Bureaucrat;
#include "Bureaucrat.hpp"

class	Form
{
public:

	Form(std::string name, int signGrade, int execGrade);
	Form(Form const &src);
	Form &operator=(Form const &src);
	virtual ~Form();
	std::string const	getName(void) const;
	bool				getSign(void) const;
	int					getSignGrade(void) const;
	int					getSignExec(void) const;
	void				beSigned(Bureaucrat &bureaucrat);

	class GradeTooHighException: public std::exception {
		virtual const char *what() const throw();
	};
	class GradeTooLowException: public std::exception {
		virtual const char *what() const throw();
	};
	class UnsignedForm: public std::exception {
		virtual const char	*what() const throw();
	};
	virtual void	execute(Bureaucrat const &executor) const;

private:
	Form(void);
	std::string const 	name;
	bool				sign;
	int	const			signGrade;
	int const			execGrade;
};

std::ostream	&operator<<(std::ostream &o, Form const &i);

#endif
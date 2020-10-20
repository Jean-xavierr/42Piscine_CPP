/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 17:27:49 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/20 16:07:03 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <sstream>
#include <fstream>

class	ShrubberyCreationForm : public Form
{
public:

	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &src);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &src);
	virtual ~ShrubberyCreationForm();

	class ErrorFile: public std::exception {
		virtual const char	*what() const throw();
	};	
	virtual void		execute(Bureaucrat const &executor) const;
	std::string			displayThree(void) const;

private:

	ShrubberyCreationForm(void);
	std::string	const	target;

};

#endif
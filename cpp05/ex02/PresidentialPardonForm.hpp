/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 15:26:11 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/20 16:05:10 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class	PresidentialPardonForm : public Form
{
public:

	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &src);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &src);
	virtual ~PresidentialPardonForm();

	virtual void	execute(Bureaucrat const &executor) const;

private:

	PresidentialPardonForm(void);
	std::string const		target;

};

#endif
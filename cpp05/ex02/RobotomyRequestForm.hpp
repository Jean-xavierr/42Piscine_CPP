/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 15:08:14 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/20 16:04:39 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTMYREQUESTFORM_HPP
# define ROBOTMYREQUESTFORM_HPP

#include "Form.hpp"

class	RobotomyRequestForm : public Form
{
public:

	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &src);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &src);
	virtual ~RobotomyRequestForm();

	virtual void	execute(Bureaucrat const &executor) const;


private:

	RobotomyRequestForm(void);
	std::string const	target;
};

#endif
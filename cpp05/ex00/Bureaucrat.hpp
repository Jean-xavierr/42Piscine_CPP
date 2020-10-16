/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 15:35:40 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/16 15:43:18 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class	Bureaucrat
{
public:

	Bureaucrat(std::string const name, unsigned int grade);
	Bureaucrat(Bureaucrat const &src);
	Bureaucrat &operator=(Bureaucrat const &src);
	virtual ~Bureaucrat();

	std::string		const getName(void) const;
	unsigned int	getGrade(void)	const;
	void			increment(void);
	void			decrement(void);

private:

	std::string const	name;
	unsigned int		grade;

	Bureaucrat(void);

};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &i);

#endif
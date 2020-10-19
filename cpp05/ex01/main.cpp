/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 11:55:22 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/19 16:53:20 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int			main(void)
{
	Form		form("Noc42", 10, 5);

	try
	{
		Bureaucrat	bureaucrat("Fred", 15);

		std::cout << bureaucrat << std::endl << std::endl;
		std::cout << form << std::endl;
		bureaucrat.signForm(form);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	bureaucrat("Big Boss", 1);

		
		std::cout << std::endl << bureaucrat << std::endl << std::endl;
		std::cout << form << std::endl << std::endl;
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		std::cout << std::endl;
		Form	noForm("NoForm", 161, 5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl;
		Form	noForm("NoForm", -1, 5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return 0;
}
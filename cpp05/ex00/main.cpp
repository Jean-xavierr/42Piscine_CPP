/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 11:55:22 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/19 14:15:21 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int			main(void)
{
	try
	{
		Bureaucrat	bureaucrat("Fred", 5);
		
		std::cout << bureaucrat << std::endl;
		bureaucrat.incrementGrade();
		std::cout << bureaucrat << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat	bureaucrat1("Jean", 1);
		
		std::cout << bureaucrat1 << std::endl;
		bureaucrat1.incrementGrade();
		std::cout << bureaucrat1 << std::endl;

	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat	bureaucrat1("Jean", 149);
		
		std::cout << bureaucrat1 << std::endl;
		bureaucrat1.decrementGrade();
		std::cout << bureaucrat1 << std::endl;
		bureaucrat1.decrementGrade();
		std::cout << bureaucrat1 << std::endl;

	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 11:55:22 by jereligi          #+#    #+#             */
/*   Updated: 2020/11/19 15:25:45 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int 		main(void) 
{
	std::cout << "--------- Test1 ---------" << std::endl;
	Bureaucrat bureaucrat01("Jeremouss", 100);
	Intern		intern01;
	Form		*shrubbery;
	Form		*robot;
	Form		*presidential;

	shrubbery = intern01.makeForm("shrubbery creation", "Shruberry_Form");
	robot = intern01.makeForm("robotomy request", "Robotomy_Request_Form");
	presidential = intern01.makeForm("presidential pardon", "Presidential_Pardon__Form");

	std::cout << std::endl << std::endl;
	std::cout << *shrubbery << std::endl << std::endl;
	std::cout << *robot << std::endl << std::endl;
	std::cout << *presidential << std::endl << std::endl;
	std::cout << std::endl << std::endl;
	try
	{
		bureaucrat01.executeForm(*shrubbery);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	try
	{
		bureaucrat01.signForm(*shrubbery);
		bureaucrat01.executeForm(*shrubbery);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "--------- Test2 ---------" << std::endl;
	Form		*badForm;

	badForm = intern01.makeForm("badForm creation", "Shruberry_Form");
	std::cout << std::endl;
	badForm = intern01.makeForm("shrubbery creation", "Shruberry_Form");

	std::cout << std::endl << *badForm << std::endl;

	delete badForm;
	delete shrubbery;
	delete robot;
	delete presidential;
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 11:55:22 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/20 17:58:28 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int 		main(void) 
{
	std::cout << "--------- Test1 ---------" << std::endl;
	Bureaucrat bureaucrat01("Jeremouss", 100);
	Form *shurbbery = new ShrubberyCreationForm("ShurbberyForm");

	std::cout << bureaucrat01 << std::endl;
	std::cout << *shurbbery << std::endl;
	try {
		bureaucrat01.signForm(*shurbbery);
		shurbbery->execute(bureaucrat01);
	} catch (std::exception & error) {
		std::cout << error.what() << std::endl;
	}
	std::cout << std::endl << std::endl << *shurbbery << std::endl << std::endl << std::endl;

	std::cout << "--------- Test2 ---------" << std::endl;
	Bureaucrat bureaucrat02("Marie", 73);
	Bureaucrat bureaucrat03("Jean", 40);
	Form *robot = new RobotomyRequestForm("RobotomyForm");
	
	std::cout << bureaucrat02 << std::endl;
	std::cout << bureaucrat03 << std::endl;
	std::cout << *robot << std::endl;
	try {
		bureaucrat02.signForm(*robot);
		robot->execute(bureaucrat02);
	} catch (std::exception & error) {
		std::cout << error.what() << std::endl;
	}
	std::cout << std::endl << std::endl << *robot << std::endl << std::endl;
	try {
		bureaucrat03.signForm(*robot);
		robot->execute(bureaucrat03);
	} catch (std::exception & error) {
		std::cout << error.what() << std::endl;
	}
	std::cout << std::endl << std::endl << *robot << std::endl;

	std::cout << "--------- Test3 ---------" << std::endl;
	Bureaucrat bureaucrat04("Big boss", 1);
	Form *presidential = new PresidentialPardonForm("PresidentialPardon");

	std::cout << bureaucrat04 << std::endl;
	std::cout << *presidential << std::endl;
	try {
		bureaucrat04.signForm(*presidential);
		presidential->execute(bureaucrat04);
	} catch (std::exception & error) {
		std::cout << error.what() << std::endl;
	}
	std::cout << std::endl << std::endl << *presidential<< std::endl << std::endl << std::endl;

	delete shurbbery;
	delete robot;
	delete presidential;
	return 0;
}
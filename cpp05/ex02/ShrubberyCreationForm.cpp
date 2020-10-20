/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 17:31:52 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/20 16:06:57 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137),
target(target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : 
Form(src.target, 145, 137)
{
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	(void)src;
	return (*this);
}

const char				*ShrubberyCreationForm::ErrorFile::what() const throw()
{
	return "Error: openning file";
}

std::string				ShrubberyCreationForm::displayThree(void) const
{
	std::stringstream tree;

	tree << "        # #### ####"			<< std::endl \
	<<		"      ### \\/#|### |/####"		<< std::endl \
	<<		"     ##\\/#/ \\||/##/_/##/_#"	<< std::endl \
	<<		"   ###  \\/###|/ \\/ # ###"	<< std::endl \
	<<		" ##_\\_#\\_\\## | #/###_/_####"<< std::endl \
	<<		"## #### # \\ #| /  #### ##/##"	<< std::endl \
	<<		" __#_--###`  |{,###---###-~"	<< std::endl \
	<<		"           \\ }{"				<< std::endl \
	<<		"            }}{"				<< std::endl \
	<<		"            }}{"				<< std::endl \
	<<		"            {{}"				<< std::endl \
	<<		"      , -=-~{ .-^- _"			<< std::endl << std::endl << std::endl \
	<<		"          &&& &&  & &&"		<< std::endl \
	<<		"      && &\\/&\\|& ()|/ @, &&"	<< std::endl \
	<<		"      &\\/(/&/&||/& /_/)_&/_&"	<< std::endl \
	<<		"    &() &\\/&|()|/&\\/ '%\" & ()"	<< std::endl \
	<<		"  &_\\_&&_\\ |& |&&/&__%_/_& &&"	<< std::endl \
	<<		"&&   && & &| &| /& & % ()& /&&"	<< std::endl \
	<<		" ()&_---()&\\&\\|&&-&&--%---()~"	<< std::endl \
	<<		"     &&     \\|||"					<< std::endl \
	<<		"             |||"					<< std::endl \
	<<		"             |||"					<< std::endl \
	<<		"             |||"					<< std::endl \
	<<		"       , -=-~  .-^- _"				<< std::endl;
	return tree.str();
}


void					ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::ofstream	newFile;

	Form::execute(executor);
	newFile.open(this->target + "_shrubbery");
	if (newFile.is_open())
	{
		newFile << this->displayThree();
		newFile.close();
	}
	else
		ShrubberyCreationForm::ErrorFile();
}
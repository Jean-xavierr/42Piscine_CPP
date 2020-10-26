/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 17:08:39 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/26 17:43:38 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class.hpp"

Base::~Base()
{
	return ;
}

void		identify_from_pointer(Base *p)
{
	Base 	*base;

	if ((base = dynamic_cast<A*>(p)))
		std::cout << "A" << std::endl;
	else if ((base = dynamic_cast<B*>(p)))
		std::cout << "B" << std::endl;
	else if ((base = dynamic_cast<C*>(p)))
		std::cout << "C" << std::endl;
}

void		identify_from_reference(Base &p)
{
	Base 	base;

	try
	{
		base = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e) {}
	try
	{
		base = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e) {}
	try
	{
		base = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e) {}
}

int			main(void)
{
	Base	*a = new A;
	Base	*b = new B;
	Base	*c = new C;
	Base	&d = *c;
	Base	*e = NULL;
	Base	&f = d;
	Base	&g = *a;

	identify_from_pointer(a);
	identify_from_pointer(b);
	identify_from_reference(d);
	identify_from_pointer(e);
	identify_from_reference(f);
	identify_from_reference(g);
	return 0;
}

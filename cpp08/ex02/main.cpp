/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:35:18 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/11/25 15:28:57 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int			main(void)
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "Subject Main :" << std::endl;
	std::cout << "mstack.top() : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "mstack.pop() | mstack.size() : " << mstack.size() << std::endl << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	std::cout << "while (mstack) : " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> 	s(mstack);
	std::cout << "stack s.size() : " << s.size() << " | MutantStack mstack.size() : "  << mstack.size() << std::endl;
	
	std::cout << std::endl;
	std::cout << "My Main :" << std::endl;
	std::string						words[5] = {"Hi", "Hello", "Bonjour", "Salut", "World"};

	MutantStack<std::string>		mstack2;
	std::list<std::string>			l;
	std::stack<std::string>			s2;

	for (int i = 0; i < 5; i++)
	{
		mstack2.push(words[i]);
		s2.push(words[i]);
		l.push_back(words[i]);
	}

	std::cout << "-------------------" << std::endl;
	std::cout << "Container size :" << std::endl;
	std::cout << "MutantStack : " << mstack2.size() << std::endl;
	std::cout << "Stack : " << s2.size() << std::endl;
	std::cout << "List : " << l.size() << std::endl;


	std::cout << "-------------------" << std::endl;
	std::cout << "Contents of MutantStack :" << std::endl;
	MutantStack<std::string>::iterator it2 = mstack2.begin();
	MutantStack<std::string>::iterator ite2 = mstack2.end();
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}

	std::cout << "-------------------" << std::endl;
	std::cout << "Contents of List :" << std::endl;
	std::list<std::string>::iterator it3 = l.begin();
	std::list<std::string>::iterator ite3 = l.end();
	while (it3 != ite3)
	{
		std::cout << *it3 << std::endl;
		++it3;
	}
	
	std::cout << "-------------------" << std::endl;
	std::cout << "Contents of Stack :" << std::endl;
	while (!s2.empty())
	{
		std::cout << s2.top() << std::endl;
		s2.pop();
	}


	return 0;
}
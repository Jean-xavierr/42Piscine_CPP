/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:35:18 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/11/05 17:18:28 by Jeanxavier       ###   ########.fr       */
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
	
	std::cout << std::endl;
	std::cout << "-------------------" << std::endl;
	std::cout << "stack s.size() : " << s.size() << " | MutantStack mstack.size() : "  << mstack.size() << std::endl;
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:35:23 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/11/25 15:18:10 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <list>
#include <stack>
#include <deque>

template <typename T>
class	MutantStack : public std::stack<T>
{
public:

	MutantStack() : std::stack<T>() {};
	MutantStack(MutantStack const &instance) : std::stack<T>(instance) {};
	virtual ~MutantStack() {};

	MutantStack	&operator=(MutantStack const &instance) {this->c = instance.c; return *this;};

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator		begin(void) {return this->c.begin();};
	iterator		end(void) {return this->c.end();};
};

#endif
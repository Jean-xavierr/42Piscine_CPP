/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 14:30:28 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/11/05 16:52:57 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class	Span
{
public:
	Span(unsigned int n);
	Span(Span const &instance);
	virtual ~Span();
	Span	&operator=(Span const &instance);
	
	void	addNumber(int nb);
	int		shortestSpan(void);
	int		longestSpan(void);

private:
	Span();
	unsigned int n;
	std::vector<int>		vec;

};

#endif
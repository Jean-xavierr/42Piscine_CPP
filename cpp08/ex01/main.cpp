/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 14:30:24 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/11/04 17:11:04 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int		main(void)
{
    Span	span1(5);
	Span	span2(4);

	span1.addNumber(3);
	span1.addNumber(5);
	span1.addNumber(7);
	span1.addNumber(15);
	span1.addNumber(10);

	span2.addNumber(2);
	span2.addNumber(7);
	span2.addNumber(3);
	span2.addNumber(9);
 
	std::cout << "Test array[3,5,7,15,10]" << std::endl;
	std::cout << "Shortest: " << span1.shortestSpan() << std::endl;
	std::cout << "Longest: " << span1.longestSpan() << std::endl << std::endl;

	std::cout << "Test array[2,7,3,9]" << std::endl;
	std::cout << "Shortest: " << span2.shortestSpan() << std::endl;
	std::cout << "Longest: " << span2.longestSpan() << std::endl << std::endl;

	try {
		std::cout << "Test : adding a number to a full array" << std::endl;
		span2.addNumber(9);}
	catch(const std::exception& e)	{
		std::cerr << "array size reached or number already existing" << std::endl << std::endl;}
	
	Span	span3(span2);
	std::cout << "Test span3(span2) | array[2,7,3,9]" << std::endl;
	std::cout << "Shortest: " << span3.shortestSpan() << std::endl;
	std::cout << "Longest: " << span3.longestSpan() << std::endl << std::endl;

	Span	span4(50000);
	for (int i = 0; i <= 50000; i += 2)
		span4.addNumber(i);
	std::cout << "Test array[50000]" << std::endl;
	std::cout << "Shortest: " << span4.shortestSpan() << std::endl;
	std::cout << "Longest: " << span4.longestSpan() << std::endl << std::endl;
	return 0;
}
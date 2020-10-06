/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 16:38:46 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/06 16:41:05 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void memoryLeak() 
{
	std::string*        panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete panthere;
}

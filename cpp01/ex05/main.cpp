/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 11:15:22 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/07 15:24:48 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int			main(void)
{
	Human	man;
	Human	woman;

	std::cout << "ID brain : " << man.identify() << std::endl;
	std::cout << "ID brain : " << woman.identify() << std::endl << std::endl;
	std::cout << "ID brain : " << man.getBrain().identify() << std::endl;
	std::cout << "ID brain : " << woman.getBrain().identify() << std::endl;
	return 0;
}
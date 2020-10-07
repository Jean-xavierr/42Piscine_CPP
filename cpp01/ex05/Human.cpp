/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 11:29:07 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/07 15:29:56 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

std::string		Human::identify(void) const
{
	std::string brain_id;
	brain_id = this->brain.identify();
	return brain_id;
}

Brain 	const &Human::getBrain(void) const
{
	return (this->brain);
}
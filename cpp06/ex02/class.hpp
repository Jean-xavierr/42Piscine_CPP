/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 17:07:14 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/26 17:18:51 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_HPP
# define CLASS_HPP

#include <iostream>

class	Base
{
public:
	virtual ~Base();
};

class	A : public Base {};
class	B : public Base {};
class	C : public Base {};

#endif
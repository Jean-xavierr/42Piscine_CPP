/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 16:14:10 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/10 17:46:36 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <sstream>
#include "ClapTrapConst.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	ClapTrap : public FragTrap, public ScavTrap
{
public:

	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &src);
	~ClapTrap();

	ClapTrap	&operator=(ClapTrap const &instance);
	void		init_var(void);
	void		rangedAttack(std::string const &target) const;
	void		meleeAttack(std::string const &target) const;
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		setName(std::string name);
	std::string	getValues(void) const;

protected:

	std::string	name;
	int			hit_points;
	int			energy_points;
	int			max_hit_points;
	int			max_hit_energy;
	int			level;
	int			melee_attack_damage;
	int			ranged_attack_damage;
	int			armor_damage_reduction;

private:
	/* data */
};

std::ostream	&operator<<(std::ostream &o, ClapTrap const &instance);

#endif
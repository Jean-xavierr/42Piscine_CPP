/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 11:30:01 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/09 18:23:44 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include "FragTrapConst.hpp"

class	FragTrap
{
public:

	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &src);
	~FragTrap();

	FragTrap	&operator=(FragTrap const &src);
	void		init_var(void);
	void		rangedAttack(std::string const &target) const;
	void		meleeAttack(std::string const &target) const;
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		vaulthunter_dot_exe(std::string const &target);
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

std::ostream	&operator<<(std::ostream &o, FragTrap const &src);

#endif
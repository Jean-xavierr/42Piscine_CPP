/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 10:56:29 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/10/10 15:05:56 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <sstream>
#include "ScavTrapConst.hpp"

class	ScavTrap
{
public:

	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &src);
	~ScavTrap();

	ScavTrap	&operator=(ScavTrap const &src);
	void		init_var(void);
	void		rangedAttack(std::string const &target) const;
	void		meleeAttack(std::string const &target) const;
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		challengeNewcomer(std::string const &target);
	void		setName(std::string name);
	std::string	getValues(void) const;

	void		rockPaperScissors(std::string const target);
	void		askMyLittleFinger(std::string const target);
	void		youLoose(std::string const target);
	void		findMyBirthday(std::string const target);
	void		noChallenge(std::string const target);


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

std::ostream	&operator<<(std::ostream &o, ScavTrap const &src);

#endif

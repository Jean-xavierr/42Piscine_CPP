/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 12:02:19 by jereligi          #+#    #+#             */
/*   Updated: 2020/10/13 17:53:48 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include <iostream>
#include <sstream>
#include "NinjaTrapConst.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class	NinjaTrap
{
public:

	NinjaTrap(void);
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const &src);
	NinjaTrap &operator=(NinjaTrap const &src);
	~NinjaTrap();

	void		init_var(void);
	void		rangedAttack(std::string const &target) const;
	void		meleeAttack(std::string const &target) const;
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		setName(std::string name);
	std::string	getValues(void) const;
	void 		ninjaShoebox(ClapTrap &trap);
    void 		ninjaShoebox(ScavTrap &trap);
    void 		ninjaShoebox(FragTrap &trap);

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

};

std::ostream	&operator<<(std::ostream &o, NinjaTrap const &i);

#endif
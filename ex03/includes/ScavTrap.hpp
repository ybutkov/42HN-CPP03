/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 22:14:42 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/05 20:15:46 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap: virtual public ClapTrap
{
  public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(std::string name, unsigned int hitPoints,
		unsigned int energy, unsigned int attackDamage);
	ScavTrap(const ScavTrap &other);
	ScavTrap& operator=(const ScavTrap& other);
	~ScavTrap(void);
	void attack(const std::string& target);
	
	void guardGate() const;
	std::string getClassName() const override;

	static constexpr unsigned int DEFAULT_HIT_POINTS = 100;
    static constexpr unsigned int DEFAULT_ENERGY = 50;
    static constexpr unsigned int DEFAULT_ATTACK_DAMAGE = 20;

};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 22:14:42 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/05 18:22:19 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap: public ClapTrap
{
  public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(std::string name, unsigned int hitPoints,
		unsigned int energy, unsigned int attackDamage);
	ScavTrap(const ScavTrap &other);
	ScavTrap& operator=(const ScavTrap& other);
	~ScavTrap(void);
	
	void guardGate() const;
	std::string getClassName() const override;
};

#endif

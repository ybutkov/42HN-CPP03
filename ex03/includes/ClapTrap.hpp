/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 19:36:27 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/05 20:31:39 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
  protected:
	std::string name;
	unsigned int hitPoints;
	unsigned int energy;
	unsigned int attackDamage;

	bool isOperational() const;

  public:
  	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(std::string name, unsigned int hitPoints,
		unsigned int energy, unsigned int attackDamage);
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &other);
	virtual ~ClapTrap(void);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void setName(std::string name);
	virtual std::string getClassName() const;
	virtual void showState(void) const;

	static constexpr unsigned int DEFAULT_HIT_POINTS = 10;
    static constexpr unsigned int DEFAULT_ENERGY = 10;
    static constexpr unsigned int DEFAULT_ATTACK_DAMAGE = 0;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 20:55:36 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/05 20:38:24 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

class DiamondTrap: public ScavTrap, public FragTrap
{
    std::string name;
public:
    DiamondTrap(void);
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap& other);
    DiamondTrap& operator=(const DiamondTrap& other);
    ~DiamondTrap(void);
    void attack(const std::string& target);

    void whoAmI() const;
    std::string getClassName() const override;
    void showState(void) const override;

    static constexpr unsigned int DEFAULT_HIT_POINTS = FragTrap::DEFAULT_HIT_POINTS;
    static constexpr unsigned int DEFAULT_ENERGY = ScavTrap::DEFAULT_ENERGY;
    static constexpr unsigned int DEFAULT_ATTACK_DAMAGE = FragTrap::DEFAULT_ATTACK_DAMAGE;
};

#endif
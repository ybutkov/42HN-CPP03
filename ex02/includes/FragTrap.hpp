/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 19:49:15 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/05 20:58:21 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap: public ClapTrap
{
public:
    static constexpr unsigned int DEFAULT_HIT_POINTS = 100;
    static constexpr unsigned int DEFAULT_ENERGY = 100;
    static constexpr unsigned int DEFAULT_ATTACK_DAMAGE = 30;
    
    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(std::string name, unsigned int hitPoints,
		unsigned int energy, unsigned int attackDamage);
    FragTrap(const FragTrap& other);
    FragTrap& operator=(const FragTrap& other);
    ~FragTrap(void);

    void highFivesGuys(void) const;
    std::string getClassName() const override;
};

#endif

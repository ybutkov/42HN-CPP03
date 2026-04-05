/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 22:01:12 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/05 20:37:54 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>


DiamondTrap::DiamondTrap(void): DiamondTrap("No_name_DiamondTrap") {}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
    this->name = name;
    this->hitPoints = DEFAULT_HIT_POINTS;
    this->energy = DEFAULT_ENERGY;
    this->attackDamage = DEFAULT_ATTACK_DAMAGE;
    std::cout << "DiamondTrap constructor creates " 
		<< name << std::endl;

}

DiamondTrap::DiamondTrap(const DiamondTrap& other): ClapTrap(other)
{
    this->name = other.name;
    std::cout << "Copy constructor copies FragTrap from "
		<< other.name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
 	std::cout << "Destructor DiamondTrap destroys " 
		<< name << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
        this->name = other.name;
        std::cout << "Copy assignment operator DiamondTrap" << std::endl;	
    }
    return *this;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() const
{
    std::cout << "DiamondTrap has name " << name
        << " and its ClapTrap name is " << ClapTrap::name
		<< std::endl;
}

void DiamondTrap::showState(void) const
{
	std::cout << getClassName() << " state — name: " << name
			  << ", hitPoints: " << hitPoints
			  << ", energy: " << energy
			  << ", attackDamage: " << attackDamage
			  << std::endl;
}

std::string DiamondTrap::getClassName() const
{
    return "DiamondTrap";
}
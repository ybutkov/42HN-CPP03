/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 22:27:01 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/05 18:22:43 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>


ScavTrap::ScavTrap(void): ScavTrap("No_name_ScavTrap") {}

ScavTrap::ScavTrap(std::string name): ScavTrap(name, 100, 50, 20) {}

ScavTrap::ScavTrap(std::string name, unsigned int hitPoints,
		unsigned int energy, unsigned int attackDamage): 
        ClapTrap(name, hitPoints, energy, attackDamage)
{
    std::cout << "ScavTrap common constructor creates " 
		<< name << ".\n   No additional actions." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
    std::cout << "Copy constructor copies ScavTrap from "
		<< other.name << ".\n   No additional actions." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
        std::cout << "Copy assignment operator ScavTrap" << std::endl;	
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
 	std::cout << "Destructor ScavTrap destroys " 
		<< name << std::endl;
}

void ScavTrap::guardGate() const
{
    std::cout << "ScavTrap " << name
        << " is now in Gate keeper mode.\n   Parameters: hitPoints=" << hitPoints
        << ", energy=" << energy
        << ", attackDamage=" << attackDamage
		<< std::endl;
}

std::string ScavTrap::getClassName() const
{
    return "ScavTrap";
}

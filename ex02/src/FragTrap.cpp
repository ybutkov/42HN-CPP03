/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 20:11:49 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/05 18:23:16 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>


FragTrap::FragTrap(void): FragTrap("No_name_FragTrap") {}

FragTrap::FragTrap(std::string name): FragTrap(name, 100, 100, 30) {}

FragTrap::FragTrap(std::string name, unsigned int hitPoints,
		unsigned int energy, unsigned int attackDamage): 
        ClapTrap(name, hitPoints, energy, attackDamage)
{
    std::cout << "FragTrap common constructor creates " 
		<< name << ".\n   No additional actions." << std::endl;
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
    std::cout << "Copy constructor copies FragTrap from "
		<< other.name << ".\n   No additional actions." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
        std::cout << "Copy assignment operator FragTrap" << std::endl;	
    }
    return *this;
}

FragTrap::~FragTrap()
{
 	std::cout << "Destructor FragTrap destroys " 
		<< name << std::endl;
}

void FragTrap::highFivesGuys(void) const
{
    std::cout << "FragTrap " << name << " requests a positive high five!" << std::endl;
}

std::string FragTrap::getClassName() const
{
    return "FragTrap";
}


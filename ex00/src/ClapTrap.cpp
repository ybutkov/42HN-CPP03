/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 19:31:41 by ybutkov           #+#    #+#             */
/*   Updated: 2026/03/02 21:47:57 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string_view>

ClapTrap::ClapTrap(std::string name):
	name(name), hitPoints(10), energy(10), attackDamage(0)
{
	std::cout << "ClapTrap constructor creates " 
		<< name
		<< std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "Copy constructor copies ClapTrap from "
		<< other.name
		<< std::endl;
	*this = other;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor ClapTrap destroys " 
		<< name
		<< std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "Copy assignment operator ClapTrap" << std::endl;	
	if (this != &other)
	{
		name = other.name;
		hitPoints = other.hitPoints;
		energy = other.energy;
		attackDamage = other.attackDamage;
	}
	return *this;
}

bool ClapTrap::isOperational() const
{
	return (hitPoints > 0);
}

void ClapTrap::attack(const std::string& target)
{
	if (!isOperational())
	{
		std::cout << name 
			<< " has been already destroyed!" << std::endl;
		return ;
	}
	if (energy == 0)
	{
		std::cout << name 
			<< " has no energy for attack!" << std::endl;
		return ;
	}
	std::cout << name 
			<< " attacks " << target 
			<< ", causing " << attackDamage
			<< " points of damage!" << std::endl;
	energy--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (!isOperational())
	{
		std::cout << name 
			<< " has been already destroyed!" << std::endl;
		return ;
	}
	if (amount <= hitPoints)
		hitPoints -= amount;
	else
		hitPoints = 0;
	std::cout << name 
			<< " takes " << amount 
			<< " points of damage! "
			<< "Has " << hitPoints << " points after."
			<< std::endl;
	if (!isOperational())
		std::cout << name 
			<< " has been destroyed!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!isOperational())
	{
		std::cout << name 
			<< " has been already destroyed!" << std::endl;
		return ;
	}
	if (energy == 0)
	{
		std::cout << name
			<< " has no energy for repairing!" << std::endl;
		return ;
	}
	hitPoints += amount;
	energy--;
	std::cout << name
			<< " is repaired for " << amount
			<< " hit points and now has " 
			<< hitPoints << " points." << std::endl;
}


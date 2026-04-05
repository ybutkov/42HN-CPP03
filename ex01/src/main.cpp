/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 19:36:18 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/05 18:26:39 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int	main(void)
{
	ScavTrap john("john");
	john.guardGate();
	john.showState();
	std::cout << std::endl;
	
	ScavTrap newTrap = john;
	
	newTrap.guardGate();
	newTrap.setName("Deere");
	john.guardGate();
	newTrap.guardGate();
	newTrap.showState();
	std::cout << std::endl;
	
	ClapTrap f = newTrap;
	f.setName("copy_newTrap");
	john.attack("YOU");
	newTrap.attack("ME");
	f.attack("US");

	return (0);
}

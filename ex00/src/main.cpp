/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 19:36:18 by ybutkov           #+#    #+#             */
/*   Updated: 2026/03/02 21:56:12 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap john("john");
	ClapTrap max("Max");
	ClapTrap bob("Bob");
	
	std::cout << std::endl;
	
	max.attack("Bob");
	bob.takeDamage(3);
	bob.takeDamage(5);
	
	// bob.takeDamage(3);
	bob.takeDamage(1);
	bob.attack("Max");
	bob.attack("Max");
	
	for (int i = 1; i < 13; i++)
		bob.beRepaired(1);

	std::cout << std::endl;
	bob.attack("Max");
	bob.attack("Max");
	std::cout << std::endl;

	for (int i = 1; i < 13; i++)
		max.attack("Bob");
		
	std::cout << std::endl;

	for (int i = 1; i < 3; i++)
		max.beRepaired(1);
	std::cout << std::endl;

	ClapTrap copyOfJohn = ClapTrap(john);
	std::cout << std::endl;
	john = bob;

	std::cout << std::endl;

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 20:22:04 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/05 18:30:16 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main(void)
{
    FragTrap ft("FragBot");
    std::cout << std::endl;

    ft.showState();
    ft.attack("Target1");
    ft.takeDamage(40);
    ft.beRepaired(20);
    ft.highFivesGuys();
    ft.showState();
    std::cout << std::endl;

    std::cout << "\n Construction/destruction chain" << std::endl;
    {
        FragTrap ft2("Ready_to_die");
        FragTrap ft_copy;
        ft_copy = ft2;
        std::cout << "FragTrap ft2 and ft_copy is in scope." << std::endl;
    }
    std::cout << std::endl;
    FragTrap ft_no_name;
    ft_no_name.showState();
    
    std::cout << std::endl;
}
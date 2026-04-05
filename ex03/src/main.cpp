/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 20:22:04 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/05 20:41:39 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int main(void)
{
    DiamondTrap diamond("DiamondBot");
    std::cout << std::endl;
    diamond.showState();
    std::cout << std::endl;
    
    diamond.attack("Target1");

    std::cout << std::endl;
    
    diamond.highFivesGuys();
    diamond.whoAmI();
    std::cout << std::endl;
    
    diamond.showState();
    std::cout << std::endl;
}
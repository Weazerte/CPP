/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:58:17 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/26 18:20:44 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap bot_Tibs("Le Tibs");
    ScavTrap bot_MeHdi("MeHdi");
    FragTrap bot_Bilal("Bilal");
    
    bot_Tibs.attack(bot_MeHdi.getName());
    if (bot_Tibs.getEnergy() >= 1)
        bot_MeHdi.takeDamage(bot_Tibs.getAttackDmg());  
    bot_MeHdi.beRepaired(8);
    bot_Tibs.attack(bot_MeHdi.getName());
    if (bot_Tibs.getEnergy() >= 1)
        bot_MeHdi.takeDamage(bot_Tibs.getAttackDmg()); 
    bot_MeHdi.guardGate();
    bot_Bilal.HighFivesGuys();
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:58:17 by eaubry            #+#    #+#             */
/*   Updated: 2024/02/07 14:14:47 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap bot_Tibs("Le Tibs");
    ScavTrap bot_MeHdi(bot_Tibs);
    bot_MeHdi.setName("MeHdi");
    
    bot_Tibs.attack(bot_MeHdi.getName());
    if (bot_Tibs.getEnergy() >= 1)
        bot_MeHdi.takeDamage(bot_Tibs.getAttackDmg());  
    bot_MeHdi.beRepaired(8);
    bot_Tibs.attack(bot_MeHdi.getName());
    if (bot_Tibs.getEnergy() >= 1)
        bot_MeHdi.takeDamage(bot_Tibs.getAttackDmg()); 
    bot_MeHdi.guardGate();
    return (0);
}

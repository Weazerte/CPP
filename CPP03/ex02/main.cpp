/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:58:17 by eaubry            #+#    #+#             */
/*   Updated: 2024/02/07 14:24:47 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap bot_Tibs("Le Tibs");
    FragTrap bot_Bilal(bot_Tibs);
    bot_Bilal.setName("Bilal");
    
    bot_Tibs.attack(bot_Bilal.getName());
    if (bot_Tibs.getEnergy() >= 1)
        bot_Bilal.takeDamage(bot_Tibs.getAttackDmg());  
    bot_Bilal.beRepaired(8);
    bot_Tibs.attack(bot_Bilal.getName());
    if (bot_Tibs.getEnergy() >= 1)
        bot_Bilal.takeDamage(bot_Tibs.getAttackDmg());
    bot_Bilal.HighFivesGuys();
    return (0);
}
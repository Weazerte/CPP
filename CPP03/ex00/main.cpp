/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:58:17 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/25 18:12:42 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap Mario("Mario");
    ClapTrap Bowser("Bowser");
    
    Mario.setAttack(9);
    Mario.attack("Bowser");
    if (Mario.getEnergy() >= 1)
        Bowser.takeDamage(Mario.getAttackDmg());  
    Bowser.beRepaired(8);
    Mario.attack("Bowser");
    if (Mario.getEnergy() >= 1)
        Bowser.takeDamage(Mario.getAttackDmg()); 
    Bowser.attack("Mario");
    return (0);
}
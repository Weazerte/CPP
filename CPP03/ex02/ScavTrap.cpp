/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:21:53 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/25 18:58:25 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
    this->HitPoint = 100;
    this->Energy = 50;
    this->AttackDmg = 20;

    std::cout << "< ScavTrap > - " << this->name << " constructed." << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "< ScavTrap > - " << this->name << " destructed." << std::endl;
}

void    ScavTrap::attack( std::string const& target ) {
    if ( this->Energy <= 0 ) {
        std::cout << "< ScavTrap > - " << this->name << " is out of energy." << std::endl;
        return;
    }
    std::cout << "< ScavTrap > - " << this->name << " attacks " << target << " at range, causing " << this->AttackDmg << " points of damage !" << std::endl;
    this->Energy -= 1;
}

void    ScavTrap::guardGate() {
    std::cout << "< ScavTrap > - " << this->name << " is now in Gate keeper mode." << std::endl;
}
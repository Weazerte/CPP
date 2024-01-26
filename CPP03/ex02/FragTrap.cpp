/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:35:30 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/26 18:51:54 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
    this->HitPoint = 100;
    this->Energy = 100;
    this->AttackDmg = 30;

    std::cout << "{ FragTrap } - " << this->name << " has been constructed." << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "{ FragTrap } - " << this->name << " has been destructed." << std::endl;
}

void    FragTrap::attack( std::string const& target ) {
    if ( this->Energy <= 0 ) {
        std::cout << "{ FragTrap } - " << this->name << " is out of energy." << std::endl;
        return;
    }
    std::cout << "{ FragTrap }- " << this->name << " attacks " << target << " causing " << this->AttackDmg << " points of damage !" << std::endl;
    this->Energy -= 1;
}

void    FragTrap::HighFivesGuys() {
    std::cout << "{ FragTrap } - " << this->name << " : Hey guys HighFive ?" << std::endl;
}
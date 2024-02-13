/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:53:03 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/31 15:17:11 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
    this->name = "default";
    this->weapon = NULL;
};

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;
};

void    HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

void    HumanB::attack() const
{
    if (this->weapon != NULL && this->weapon->getType() != "") {
        std::cout << name << " attacks with their " << this->weapon->getType() << std::endl;
    } else {
        std::cout << name << " doesn't have a weapon to attack." << std::endl;
    }
}



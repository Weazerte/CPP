/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:38:43 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/31 15:17:23 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA()
{
    this->name = "default";
    this->weapon = NULL;
}

HumanA::HumanA(std::string name, Weapon& weapon)
{
    this->name = name;
    this->weapon = &weapon;
}

void    HumanA::attack() const
{
    if (this->weapon != NULL && this->weapon->getType() != "") {
        std::cout << name << " attacks with their " << this->weapon->getType() << std::endl;
    } else {
        std::cout << name << " doesn't have a weapon to attack." << std::endl;
    }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:53:03 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/19 02:32:03 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
    this->name = "defualt";
    this->weapon = NULL;
};

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;
};

void    HumanB::setWeapon(Weapon *weapon)
{
    this->weapon = weapon;
}

void    HumanB::attack() const
{
    std::cout << "you have been slayed by "<< name << " using " << this->weapon->getType() << std::endl;
    
}



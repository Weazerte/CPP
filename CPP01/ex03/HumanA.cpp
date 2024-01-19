/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:38:43 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/19 02:31:59 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): weapon(weapon)
{
    this->name = name;
}

void    HumanA::attack() const
{
    std::cout << "you have been slayed by "<< name << " using " << this->weapon.getType() << std::endl;
    
}
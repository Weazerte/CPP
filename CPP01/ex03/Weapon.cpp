/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:53:41 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/18 17:23:22 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void){};
Weapon::~Weapon(void){};

std::string    Weapon::getType() const
{
    return(this->Type);
}

void    Weapon::setType(std::string type)
{
    this->Type = type;
}

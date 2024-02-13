/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:41:26 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/31 14:13:42 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::~Zombie(void)
{
	std::cout << this->name << " is dead" << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

void Zombie::announce( void )
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
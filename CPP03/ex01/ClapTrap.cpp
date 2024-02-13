/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:11:03 by eaubry            #+#    #+#             */
/*   Updated: 2024/02/07 14:18:01 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->HitPoint = 10;
    this->Energy = 10;
    this->AttackDmg = 0;
    std::cout << "[ ClapTrap ] - " << this->name << " constructed." << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "[ ClapTrap ] - " << this->name << " destructed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
    *this = rhs;
    std::cout << "[ ClapTrap ] - " << this->name << " has been copied with copy constuctor." << std::endl;
    return;
}

ClapTrap&   ClapTrap::operator=( const ClapTrap& rhs ) {
    this->name = rhs.name;
    this->HitPoint = rhs.HitPoint;
    this->Energy = rhs.Energy;
    this->AttackDmg = rhs.AttackDmg;
    std::cout << "[ ClapTrap ] - " << this->name << " has been copied with copy assignment operator." << std::endl;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->HitPoint < 1)
    {
        std::cout << "[ ClapTrap ] - " << this->name << " is dead" << std::endl;
        return ;
    }
    else if (this->Energy < 1)
    {
        std::cout << "[ ClapTrap ] - " << this->name << " has no more Energy" << std::endl;
        return ;
    }
    this->Energy -= 1;
    std::cout << "[ ClapTrap ] - " << this->name << " attack " << target << " causing " << this->AttackDmg << ", " << this->getEnergy() << " Energy left" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->HitPoint < 1)
    {
        std::cout << "[ ClapTrap ] - " << this->name << " is dead" << std::endl;
        return ;
    }
    if ((int)amount >= this->HitPoint)
        this->HitPoint = 0;
    else
        this->HitPoint -= amount;
    std::cout << "[ ClapTrap ] - " << this->name << " has " << this->HitPoint << " HP left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->HitPoint < 1)
    {
        std::cout << "[ ClapTrap ] - " << this->name << " is dead" << std::endl;
        return ;
    }
    if (this->Energy > 0)
    {
        std::cout << "[ ClapTrap ] - " << this->name << " recover " << amount << " HP" << std::endl;
        this->Energy -= 1;
        this->HitPoint += amount;
    }
    else 
        std::cout << this->name << " has no more energy" << std::endl;
}

int ClapTrap::getAttackDmg(void)
{
    return (this->AttackDmg);
}

int ClapTrap::getEnergy(void)
{
    return (this->Energy);
}

void ClapTrap::setName(std::string name)
{
    this->name = name;
    std::cout << "[ ClapTrap ] - " << this->name << " has now " << name << " as name" << std::endl;
}

std::string ClapTrap::getName(void)
{
    return (this->name);
}

int ClapTrap::getHp()
{
    return (this->HitPoint);
}

void    ClapTrap::setAttack(unsigned int amount)
{
    this->AttackDmg = amount;
    std::cout << "[ ClapTrap ] - " << this->name << " has now " << amount << " of attacking damage" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:35:40 by eaubry            #+#    #+#             */
/*   Updated: 2024/02/12 16:19:58 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name)
{
    this->_name = name;
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] = NULL;
    }
    std::cout << "Character " << this->_name << " created" << std::endl;
}
Character::Character(Character const &src) : _name(src._name)
{
    *this = src;
    std::cout << "Character " << this->_name << " created" << std::endl;
}
Character::~Character()
{
    std::cout << "Character " << this->_name << " destroyed" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] != NULL)
        {
            delete (this->_inventory[i]);
        }
    }
}

Character&   Character::operator=(Character const &rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
        for(int i = 0; i < 4; i++)
        {
            this->_inventory[i] = rhs._inventory[i];
        }
    }
    return (*this);
}

std::string const&  Character::getName() const
{
    return (this->_name);
}

void    Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m;
            std::cout << "Character " << this->_name << " has equiped " << this->_inventory[i]->getType() << std::endl;
            return ;
        }
    }
    std::cout << "You cannot equip " << m->getType() << ", inventory is full" << std::endl;
}

void    Character::unequip( int idx ) {
    if (this->_inventory[idx])
    {
        this->_inventory[idx] = NULL;
        std::cout << "Character " << this->_name << " unequipped" << std::endl;
    }
    else
        std::cout << "Character " << this->_name << " can't unequip" << std::endl;
}

void    Character::use(int idx, ICharacter& target)
{
    if (this->_inventory[idx])
        {
            this->_inventory[idx]->use(target);
            std::cout << "Character " << this->_name << " uses " << this->_inventory[idx]->getType() << std::endl;
        }
        else
            std::cout << "Character " << this->_name << " can't use" << std::endl;
}
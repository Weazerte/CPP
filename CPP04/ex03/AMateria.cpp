/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:35:46 by eaubry            #+#    #+#             */
/*   Updated: 2024/02/12 12:45:03 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){}

AMateria::AMateria(std::string const & type) : _type(type)
{
    std::cout << "AMateria : " << this->_type << "created" << std::endl;
}

AMateria::AMateria(AMateria const & src)
{
    *this = src;
}

AMateria& AMateria::operator=(AMateria const &rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return *this;
}

AMateria::~AMateria()
{
    std::cout << "AMateria " << this->_type << " destroyed" << std::endl;
}

std::string const & AMateria::getType() const
{
    return (this->_type);
}

AMateria*   AMateria::clone() const
{
    return (AMateria*)this;
}

void        AMateria::use(ICharacter& target)
{
    std::cout << "AMateria " << this->_type << " used on " << target.getName() << std::endl;
}
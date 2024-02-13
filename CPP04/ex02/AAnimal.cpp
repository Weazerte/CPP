/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:51:18 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/31 16:15:05 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void )
{
    this->type = "AAnimal";
    std::cout << this->type << " constructor called" << std::endl;
}

AAnimal::AAnimal( std::string type )
{
    this->type = type;
    std::cout << "AAnimal " << this->type << " constructor called" << std::endl;
}

AAnimal::~AAnimal( void )
{
    std::cout << "Animal destructor called" << std::endl;
}

AAnimal::AAnimal( const AAnimal& src )
{
    std::cout << "AAnimal copy constructor called" << std::endl;
    *this = src;
}

AAnimal& AAnimal::operator=( const AAnimal& rhs )
{
    std::cout << "<AAnimal.cpp:35: AAnimal assignment operator called" << std::endl;
    if ( this != &rhs ) {
        this->type = rhs.type;
    }
    return *this;
}

void AAnimal::makeSound( void ) const
{
    std::cout << "AAnimal makeSound called" << std::endl;
}

std::string    AAnimal::getType( void ) const
{
    return this->type;
}
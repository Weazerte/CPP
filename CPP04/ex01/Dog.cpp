/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:54:43 by eaubry            #+#    #+#             */
/*   Updated: 2024/02/12 15:46:31 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp" 


Dog::Dog( void ) : Animal( "Dog" )
{
    std::cout << this->type << " constructor called" << std::endl;
    try {
        this->_brain = new Brain();
    }
    catch (const std::bad_alloc& e) {
        std::cout << "Memory Allocation is failed : " << e.what() << std::endl;
    }
}

Dog::~Dog( void )
{
    delete  this->_brain;
    std::cout << this->type << " destructor called" << std::endl;
}

void    Dog::makeSound( void ) const
{
    std::cout << "Woof" << std::endl;
}

Dog::Dog( const Dog& src )
{
    *this = src;
}

Dog& Dog::operator=( const Dog& src )
{
    std::cout << "Dog copy called." << std::endl;
    if (this != &src)
    {
        this->type = src.type;
        this->_brain = new Brain( *src._brain );
    }
    return *this;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:54:43 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/31 16:18:33 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp" 

Dog::Dog() {
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
    this->_brain = new Brain();
}

Dog::Dog(const Dog& src ) {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
    delete this->_brain;
}

Dog & Dog::operator=( Dog const & rhs ) {
    std::cout << "Dog assignation operator called" << std::endl;
    if ( this != &rhs ) {
        this->type = rhs.type;
        this->_brain = new Brain();
        for ( int i = 0; i < 100; i++ ) {
            this->_brain->setIdea( i, rhs._brain->getIdea( i ) );
        }
    }
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Wouf" << std::endl;
}
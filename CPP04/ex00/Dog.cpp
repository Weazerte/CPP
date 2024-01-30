/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:54:43 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/29 14:04:30 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp" 

Dog::Dog() {
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog( Animal const & src ) {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}

Dog & Dog::operator=( Dog const & rhs ) {
    std::cout << "Dog assignation operator called" << std::endl;
    this->type = rhs.type;
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Wouf" << std::endl;
}
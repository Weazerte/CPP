/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:51:18 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/29 14:01:44 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal( Animal const & src ) {
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const{
    return this->type;
}

void Animal::makeSound() const {
    std::cout << "Animal sound" << std::endl;
}
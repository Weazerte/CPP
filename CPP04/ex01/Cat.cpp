/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:53:32 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/30 01:17:06 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
    this->_brain = new Brain();
}

Cat::Cat( Animal const & src ) {
    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
    delete this->_brain;
}

Cat & Cat::operator=( Cat const & rhs ) {
    std::cout << "Cat assignation operator called" << std::endl;
    this->type = rhs.type;
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Miaou" << std::endl;
}
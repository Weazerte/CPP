/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:38:47 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/29 15:50:45 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << "WrongCat default constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat( WrongAnimal const & src ) {
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = src;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat & WrongCat::operator=( WrongCat const & rhs ) {
    std::cout << "WrongCat assignation operator called" << std::endl;
    this->type = rhs.type;
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "WrongCat sound" << std::endl;
}

std::string WrongCat::getType() const{
    return this->type;
}


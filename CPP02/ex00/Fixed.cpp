/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:19:02 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/23 17:22:17 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    this->nb = 0;
}

Fixed::Fixed( const Fixed &autre ) {
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(autre.getRawBits());
}

Fixed& Fixed::operator=( const Fixed &autre ) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &autre)
        this->nb = autre.getRawBits();
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->nb;
}

void    Fixed::setRawBits( int const raw ) {
    this->nb = raw;
}
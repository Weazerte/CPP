/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:19:02 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/23 17:31:24 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    this->nb = 0;
}

Fixed::Fixed( const int n ) : nb( n << st_nb ) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float n ) : nb( roundf( n * ( 1 << st_nb) ) ) {
    std::cout << "Float constructor called" << std::endl;
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
    return this->nb;
}

void    Fixed::setRawBits( int const raw ) {
    this->nb = raw;
}

float   Fixed::toFloat( void ) const {
    return static_cast<float>( this->getRawBits() ) / ( 1 << st_nb );
}

int     Fixed::toInt( void ) const {
    return this->nb >> st_nb;
}

std::ostream & operator<<( std::ostream & o, Fixed const & i ) {
    o << i.toFloat();
    return o;
}
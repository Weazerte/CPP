/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:43:17 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/25 16:33:03 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    this->nb = 0;
}

Fixed::~Fixed(){}

Fixed::Fixed( const int n ) : nb( n << st_nb ) {
}

Fixed::Fixed( const float n ) : nb( roundf( n * ( 1 << st_nb) ) ) {
}

Fixed::Fixed( const Fixed &autre ) {
    this->setRawBits(autre.getRawBits());
}

Fixed& Fixed::operator=( const Fixed &autre ) {
    if (this != &autre)
        this->nb = autre.getRawBits();
    return *this;
}

bool Fixed::operator>(const Fixed& other) const {
	return this->nb > other.nb;
}

bool Fixed::operator<(const Fixed& other) const {
	//return this->nb < other.nb;
	return other > *this;
}

bool Fixed::operator>=(const Fixed& other) const {
	//return this->nb >= other.nb;
	return !(other > *this);
}

bool Fixed::operator<=(const Fixed& other) const {
	//return this->nb <= other.nb;
	return !(*this > other);
}

bool Fixed::operator==(const Fixed& other) const {
	return this->nb == other.nb;
}

bool Fixed::operator!=(const Fixed& other) const {
	//return this->nb != other.nb;
	return !(this->nb == other.nb);
}

Fixed Fixed::operator+(const Fixed& other) const {
	Fixed res;

	res.nb = (this->nb + other.nb);
	return res;
}

Fixed Fixed::operator-(const Fixed& other) const {
	Fixed res;

	res.nb = (this->nb - other.nb);
	return res;
}

Fixed Fixed::operator*(const Fixed& other) const {
	Fixed res(this->toFloat() * other.toFloat());
	return res;
}

Fixed Fixed::operator/(const Fixed& other) const {
	Fixed res(this->toFloat() / other.toFloat());
	return res;
}

Fixed& Fixed::operator++() {
	++(this->nb);
	return (*this);
}

Fixed& Fixed::operator--() {
	--(this->nb);
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed prev(*this);

	++(this->nb);
	return prev;
}

Fixed Fixed::operator--(int) {
	Fixed prev(*this);

	--(this->nb);
	return prev;
}

Fixed& Fixed::min(Fixed& lhs, Fixed& rhs) {
	if (lhs < rhs) return lhs;
	return rhs;
}

Fixed& Fixed::max(Fixed& lhs, Fixed& rhs) {
	if (lhs > rhs) return lhs;
	return rhs;
}

const Fixed& Fixed::min(const Fixed& lhs, const Fixed& rhs) {
	if (lhs < rhs) return lhs;
	return rhs;
}

const Fixed& Fixed::max(const Fixed& lhs, const Fixed& rhs) {
	if (lhs > rhs) return lhs;
	return rhs;
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
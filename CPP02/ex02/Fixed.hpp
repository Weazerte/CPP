/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:43:14 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/25 16:29:13 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
    private:
        int nb;
        static const int st_nb = 8;
    public:
        Fixed( void );
        Fixed( const int n );
        Fixed( const float n );
        Fixed(const Fixed &autre);
        ~Fixed();
        Fixed& operator=(const Fixed &autre);
        bool operator>(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;
		Fixed operator+(const Fixed& other) const;
		Fixed operator-(const Fixed& other) const;
		Fixed operator*(const Fixed& other) const;
		Fixed operator/(const Fixed& other) const;
		Fixed& operator++();
		Fixed& operator--();
		Fixed operator++(int);
		Fixed operator--(int);
        static Fixed& min(Fixed& lhs, Fixed& rhs);
		static Fixed& max(Fixed& lhs, Fixed& rhs);
		static const Fixed& min(const Fixed& lhs, const Fixed& rhs);
		static const Fixed& max(const Fixed& lhs, const Fixed& rhs);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif
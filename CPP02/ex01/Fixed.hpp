/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:18:12 by eaubry            #+#    #+#             */
/*   Updated: 2024/02/01 10:45:13 by eaubry           ###   ########.fr       */
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
        Fixed( const int n );// convetit en virgule fixe
        Fixed( const float n ); // convertit en virgule fixe
        Fixed( const Fixed &autre );
        Fixed& operator=( const Fixed &autre );
        ~Fixed();

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );

        float   toFloat( void ) const; //convertit en virgule fixe
        int     toInt( void ) const; //convertit en entier
};

std::ostream & operator<<( std::ostream & o, const Fixed& i );

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:18:12 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/23 16:41:46 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
    private:
        int nb;
        static const int st_nb = 8;
    public:
        Fixed();
        Fixed(const Fixed &autre);
        ~Fixed();
        Fixed& operator=(const Fixed &autre);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif
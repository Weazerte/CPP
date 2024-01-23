/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:12:20 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/23 14:38:49 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP

#define HARL_HPP

#include <string>
#include <iostream>

class Harl {
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
        static const std::string Wich[];
    public:
        Harl( void);
        ~Harl(void);
        void complain( std::string level );
        
    
};

#endif
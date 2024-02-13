/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:42:46 by eaubry            #+#    #+#             */
/*   Updated: 2024/02/12 15:43:42 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP

#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal 
{
    protected:
        std::string type;
    public:
        Animal();
        Animal( Animal const & src );
        virtual ~Animal();
        Animal( std::string type );
        std::string getType() const;
        virtual void makeSound() const;
};


#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:42:46 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/30 18:25:19 by eaubry           ###   ########.fr       */
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
        Animal();
        Animal( Animal const & src );
    public:
        virtual ~Animal();
        std::string getType() const;
        virtual void makeSound() const;
};


#endif
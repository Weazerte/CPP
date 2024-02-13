/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:42:46 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/31 16:11:29 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP

#define AANIMAL_HPP

#include <string>
#include <iostream>

class AAnimal 
{
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal( std::string type );
        virtual ~AAnimal();
        AAnimal(const AAnimal& src );
        AAnimal& operator=( const AAnimal& rhs );
        std::string getType() const;
        virtual void makeSound() const = 0;
};


#endif
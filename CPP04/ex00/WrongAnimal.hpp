/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:36:04 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/29 15:37:13 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP

#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal 
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal( WrongAnimal const & src );
        virtual ~WrongAnimal();
        WrongAnimal & operator=( WrongAnimal const & rhs );
        std::string getType() const;
        void makeSound() const;
};

#endif
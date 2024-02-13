/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:52:23 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/31 16:18:12 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP

#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
    private:
        Brain *_brain;
    public:
        Dog();
        ~Dog();
        Dog(const Dog& src );
        Dog& operator=(const Dog& rhs);
        void makeSound() const;
};

#endif
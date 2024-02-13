/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:55:54 by eaubry            #+#    #+#             */
/*   Updated: 2024/02/12 15:19:58 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main( void )
{
    // const AAnimal d;
    
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    delete j;
    delete i;

    Dog basic;
    {
        Dog tmp = basic;
    }

    const AAnimal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    delete animals[0];
    delete animals[1];
    delete animals[2];
    delete animals[3];


    return 0;
}

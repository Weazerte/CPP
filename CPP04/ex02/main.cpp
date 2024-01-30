/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:55:54 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/30 14:52:49 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main( void )
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;
    delete i;

    Dog basic;
    {
        Dog tmp = basic;
    }

    const Animal* animals[100];
    for ( int k = 0; k < 100; k++ ) {
        if ( k % 2 == 0 ) {
            animals[k] = new Dog();
        } else {
            animals[k] = new Cat();
        }
    }


    return 0;
}

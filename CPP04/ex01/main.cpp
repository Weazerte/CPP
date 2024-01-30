/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:55:54 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/30 01:37:29 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wrongmeta = new WrongAnimal();
    const WrongAnimal* l = new WrongCat();
    Animal tab[100] = {Animal(), Animal()};
    
    for (int i = 0; i < 50; i++)
    {
        tab[i] = new Dog();
    }
    for (int i = 0; i < 50; i++)
    {
        tab[i] = new cat();
    }
    
}

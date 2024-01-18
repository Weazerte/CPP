/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:39:39 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/18 15:41:29 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
    Zombie *arrZombie;
    int n = 5;
    int i = 0;
    
    arrZombie = zombieHorde(n, "hiii");
    while (i < n)
    {
        arrZombie[i].announce();
        i++;
    }
    delete[] arrZombie;
    return 0;
}
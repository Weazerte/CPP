/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:12:55 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/31 14:12:45 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *MultZombie = new Zombie[N];
    for(int i = 0; i < N; i++)
    {
        MultZombie[i].setName(name);
    }
    return (MultZombie);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:39:39 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/31 14:15:13 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void ) {
    std::cout << "How many zombies do you want to create ?" << std::endl;
    int N;
    std::cin >> N;
    Zombie *zombiz = zombieHorde(N, "zombi");

    for (int i = 0; i < N; i++) {
        zombiz[i].announce();
    }

    delete [] zombiz;
    return 0;
}
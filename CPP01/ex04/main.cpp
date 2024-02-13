/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 02:34:13 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/31 15:34:32 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main ( int ac, char **av )
{
    if (ac != 4) {
        std::cerr << "Usage: ./Sed <filename> <to_find> <replace>." << std::endl;
        return 1;
    } else {
        if (av[1][0] == 0) {
            std::cerr << "Error: <filename> must not be empty." << std::endl;
            return 1;
        }
        Sed   sed2(av[1]);
        if (av[2][0] == 0 || av[3][0] == 0) {
            std::cerr << "Error: <to_find> and <replace> must not be empty." << std::endl;
            return 1;
        }
        sed2.replace(av[2], av[3]);
    }
    return 0;
}
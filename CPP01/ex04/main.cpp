/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 02:34:13 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/30 16:37:36 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main ( int ac, char **av )
{
    if (ac != 4) {
        std::cerr << "Usage: ./Sed <filename> <to_find> <replace>." << std::endl;
        return 1;
    } else {
        Sed   sed2(av[1]);
        sed2.replace(av[2], av[3]);
    }
    return 0;
}
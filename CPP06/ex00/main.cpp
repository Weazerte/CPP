/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:23:56 by eaubry            #+#    #+#             */
/*   Updated: 2024/04/08 16:27:03 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

int main(int ac, char **av) {
    if (ac != 2) {
        std::cout << "Error: Wrong number of arguments" << std::endl;
        return 1;
    }
    ScalarConvert sc(av[1]);
    return 0;
}
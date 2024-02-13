/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:10:14 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/31 15:39:44 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl harl;
    
    if (ac != 2)
    {
        harl.complain("DEBUG");
        harl.complain("INFO");
        harl.complain("WARNING");
        harl.complain("ERROR");
        harl.complain("nothing");
    }
    else
    {
        harl.complain(av[1]);
    }
    return 0;
}
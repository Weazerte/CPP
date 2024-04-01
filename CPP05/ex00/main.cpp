/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:35:18 by eaubry            #+#    #+#             */
/*   Updated: 2024/04/01 19:01:05 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat *bureaucrat = new Bureaucrat("Bob", 1);
    std::cout << *bureaucrat << std::endl;
    try
    {
        bureaucrat->IncrementGrade();
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << *bureaucrat << std::endl;
}
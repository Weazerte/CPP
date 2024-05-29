/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:35:18 by eaubry            #+#    #+#             */
/*   Updated: 2024/05/13 13:44:40 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

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
    delete bureaucrat;
        Bureaucrat *bureaucrat1 = new Bureaucrat("Denis", 133);
    std::cout << *bureaucrat1 << std::endl;
    try
    {
        bureaucrat1->IncrementGrade();
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << *bureaucrat1 << std::endl;
    delete bureaucrat1;
}
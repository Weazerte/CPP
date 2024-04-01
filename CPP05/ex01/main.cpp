/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:48:17 by eaubry            #+#    #+#             */
/*   Updated: 2024/04/01 19:16:05 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat *bureaucrat = new Bureaucrat("Bob", 1);
    Form *form = new Form("Form1", 1, 1);
    std::cout << *bureaucrat << std::endl;
    std::cout << *form << std::endl;
    try
    {
        bureaucrat->IncrementGrade();
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << *bureaucrat << std::endl;
    try
    {
        form->beSigned(*bureaucrat);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << *form << std::endl;
    delete bureaucrat;
    delete form;
}
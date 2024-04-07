/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 18:07:09 by eaubry            #+#    #+#             */
/*   Updated: 2024/04/07 12:36:12 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	ShrubberyCreationForm shrubbery("Shrubbery");
    Bureaucrat b("Bureaucrat", 1);

    try {
        shrubbery.beSigned(b);
    } 
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        shrubbery.execute(b);
    } 
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
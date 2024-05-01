/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 18:07:09 by eaubry            #+#    #+#             */
/*   Updated: 2024/04/27 16:01:30 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/AForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"

int main()
{
	ShrubberyCreationForm shrubbery("Shrubbery");
    Bureaucrat b("Bureaucrat", 1);

    std::cout << shrubbery;
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 18:07:09 by eaubry            #+#    #+#             */
/*   Updated: 2024/04/07 13:37:23 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat *a = new Bureaucrat("Emperor", 1);
	Intern *z = new Intern();
	AForm *b = z->makeForm("RobotomyRequestForm", "Bender");
	AForm *c = z->makeForm("ShrubberyCreationForm", "Cristmas");
    
    std::cout << *a;
	std::cout << *b;
	std::cout << *c;
    b->beSigned(*a);
    a->signForm(*c);
    try {
        a->executeForm(*b);
    } 
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        a->executeForm(*c);
    } 
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
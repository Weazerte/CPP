/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 18:07:09 by eaubry            #+#    #+#             */
/*   Updated: 2024/04/27 16:11:40 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/AForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/Intern.hpp"

int main()
{
	Bureaucrat *a = new Bureaucrat("Emperor", 1);
	Intern *z = new Intern();
	AForm *b = z->makeForm("RobotomyRequestForm", "christian");
	AForm *c = z->makeForm("ShrubberyCreationForm", "bruno");
    AForm *d = z->makeForm("PresidentialPardonForm", "denis");
    
    std::cout << *a;
	std::cout << *b;
	std::cout << *c;
    std::cout << *d;
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
    try {
        a->executeForm(*d);
    } 
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    delete a;
    delete b;
    delete c;
    delete d;
    delete z;
    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 18:07:09 by eaubry            #+#    #+#             */
/*   Updated: 2024/05/13 15:27:21 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/AForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"

int main()
{
    std::cout << "\033[34mTesting Shrubbery\033[0m" << std::endl;
	ShrubberyCreationForm shrubbery("Shrubbery");
    Bureaucrat a("Bureaucrat", 146);
    Bureaucrat b("Bureaucrat", 138);
    std::cout << shrubbery;
    try {
        shrubbery.beSigned(a);
    } 
    catch (std::exception &e) {
        std::cerr << "\033[31m" << e.what() << "\033[0m" << std::endl;
    }
    try {
        a.IncrementGrade();
    } 
    catch (std::exception &e) {
        std::cerr << "\033[31m" << e.what() << "\033[0m" << std::endl;
    }
    try {
        shrubbery.beSigned(a);
    } 
    catch (std::exception &e) {
        std::cerr << "\033[31m" << e.what() << "\033[0m" << std::endl;
    }   
    try {
        shrubbery.execute(b);
    } 
    catch (std::exception &e) {
        std::cerr << "\033[31m" << e.what() << "\033[0m" << std::endl;
    }
    try {
        b.IncrementGrade();
    } 
    catch (std::exception &e) {
        std::cerr << "\033[31m" << e.what() << "\033[0m" << std::endl;
    }
    try {
        shrubbery.execute(b);
    } 
    catch (std::exception &e) {
        std::cerr << "\033[31m" << e.what() << "\033[0m" << std::endl;
    }
    
    std::cout << "\n\033[34mTesting Robotomy Request\033[0m" << std::endl;
    RobotomyRequestForm robot("Robotomy");
    Bureaucrat c("Bureaucrat", 73);
    Bureaucrat d("Bureaucrat", 46);
    std::cout << robot;
    try {
        robot.beSigned(c);
    } 
    catch (std::exception &e) {
        std::cerr << "\033[31m" << e.what() << "\033[0m" << std::endl;
    }
    try {
        c.IncrementGrade();
    } 
    catch (std::exception &e) {
        std::cerr << "\033[31m" << e.what() << "\033[0m" << std::endl;
    }
    try {
        robot.beSigned(c);
    } 
    catch (std::exception &e) {
        std::cerr << "\033[31m" << e.what() << "\033[0m" << std::endl;
    }   
    try {
        robot.execute(d);
    } 
    catch (std::exception &e) {
        std::cerr << "\033[31m" << e.what() << "\033[0m" << std::endl;
    }
    try {
        d.IncrementGrade();
    } 
    catch (std::exception &e) {
        std::cerr << "\033[31m" << e.what() << "\033[0m" << std::endl;
    }
    try {
        robot.execute(d);
    } 
    catch (std::exception &e) {
        std::cerr << "\033[31m" << e.what() << "\033[0m" << std::endl;
    }
    
    std::cout << "\n\033[34mTesting Presidential Pardon\033[0m" << std::endl;
    PresidentialPardonForm president("President");
    Bureaucrat e("Bureaucrat", 26);
    Bureaucrat f("Bureaucrat", 6);
    std::cout << president;
    try {
        president.beSigned(e);
    } 
    catch (std::exception &e) {
        std::cerr << "\033[31m" << e.what() << "\033[0m" << std::endl;
    }
    try {
        e.IncrementGrade();
    } 
    catch (std::exception &e) {
        std::cerr << "\033[31m" << e.what() << "\033[0m" << std::endl;
    }
    try {
        president.beSigned(e);
    } 
    catch (std::exception &e) {
        std::cerr << "\033[31m" << e.what() << "\033[0m" << std::endl;
    }   
    try {
        president.execute(f);
    } 
    catch (std::exception &e) {
        std::cerr << "\033[31m" << e.what() << "\033[0m" << std::endl;
    }
    try {
        f.IncrementGrade();
    } 
    catch (std::exception &e) {
        std::cerr << "\033[31m" << e.what() << "\033[0m" << std::endl;
    }
    try {
        robot.execute(f);
    } 
    catch (std::exception &e) {
        std::cerr << "\033[31m" << e.what() << "\033[0m" << std::endl;
    }
    return 0;
}
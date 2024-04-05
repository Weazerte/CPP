/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<<< HEAD:CPP05/ex02/main.cpp
/*   Created: 2024/03/28 13:06:39 by eaubry            #+#    #+#             */
/*   Updated: 2024/03/28 16:26:15 by eaubry           ###   ########.fr       */
========
/*   Created: 2024/03/22 16:48:17 by eaubry            #+#    #+#             */
/*   Updated: 2024/04/01 19:16:05 by eaubry           ###   ########.fr       */
>>>>>>>> 1a14c498ff58cf752eefed43e0f0a1909e333d6b:CPP05/ex01/main.cpp
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
<<<<<<<< HEAD:CPP05/ex02/main.cpp
    Bureaucrat Denis("Denis", 77);
    Bureaucrat Paul("Paul", 5);
    Bureaucrat Jean("Jean", 18);
    AForm A("A", 15, 20);
    ShrubberyCreationForm B("B");

========
    Bureaucrat *bureaucrat = new Bureaucrat("Bob", 1);
    Form *form = new Form("Form1", 1, 1);
    std::cout << *bureaucrat << std::endl;
    std::cout << *form << std::endl;
>>>>>>>> 1a14c498ff58cf752eefed43e0f0a1909e333d6b:CPP05/ex01/main.cpp
    try
    {
        bureaucrat->IncrementGrade();
    }
    catch (std::exception &e)
    {
<<<<<<<< HEAD:CPP05/ex02/main.cpp
        std::cerr << e.what() << '\n';
    } 
    try
    {
        A.beSigned(Paul);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        B.execute(Denis);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
========
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
>>>>>>>> 1a14c498ff58cf752eefed43e0f0a1909e333d6b:CPP05/ex01/main.cpp
}
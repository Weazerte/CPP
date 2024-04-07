/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 12:45:33 by eaubry            #+#    #+#             */
/*   Updated: 2024/04/07 13:37:59 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
    std::cout << "Intern created" << std::endl;
}

Intern::Intern(Intern const &src) {
    std::cout << "Intern Copy Constructor called" << std::endl;
    *this = src;
}

Intern::~Intern() {
    std::cout << "Intern destroyed" << std::endl;
}

Intern &Intern::operator=(Intern const &rhs) {
    if (this == &rhs)
        return *this;
    return *this;
}

static AForm	*makePresident(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

static AForm	*makeRobot(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

static AForm	*makeShrubbery(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
    if (formName.empty() || target.empty())
        throw Intern::NoNameException();
    else
    {
        const char* typeTab[3] = {
        "ShrubberyCreationForm",
        "RobotomyRequestForm",
        "PresidentialPardonForm"
        };
        for (int i = 0; i < 3; i++)
        {
            if (formName == typeTab[i])
            {
                switch (i)
                {
                    case 0:
                        return (makeShrubbery(target));
                    case 1:
                        return (makeRobot(target));
                    case 2:
                        return (makePresident(target));
                    default:
                        break;
                }
            }
        }
    }
    throw Intern::WrongFormTypeException();
    return (NULL);
}

const char *Intern::NoNameException:: what(void) const throw() 
{
    return ("The form name or form type can't be empty\n");
};

const char *Intern::WrongFormTypeException:: what(void) const throw() 
{
    return ("The form type does not exist\n");
};
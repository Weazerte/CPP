/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 12:43:35 by eaubry            #+#    #+#             */
/*   Updated: 2024/04/07 13:33:23 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP

#define INTERN_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern{

    public:
        Intern();
        Intern(Intern const &src);
        ~Intern();
        Intern & operator=(Intern const &rhs);

        AForm *makeForm(std::string formName, std::string target);

        class NoNameException : public std::exception{
            public:
                virtual const char *what() const throw();
        };

        class WrongFormTypeException : public std::exception{
            public:
                virtual const char *what() const throw();
        };
};

#endif
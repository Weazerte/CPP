/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:37:15 by eaubry            #+#    #+#             */
/*   Updated: 2024/04/05 17:49:35 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP

#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat  {

    private :
        const std::string name_;
        int grade_;
    
    public :
        Bureaucrat();
        Bureaucrat(Bureaucrat const &src);
        Bureaucrat(std::string const name);
        Bureaucrat(int grade);
        Bureaucrat(std::string const name, int grade);
        ~Bureaucrat();
        Bureaucrat & operator=(Bureaucrat const &rhs);
        std::string getName() const;
        int getGrade() const;
        void setGrade(int grade);
        void IncrementGrade();
        void DecrementGrade();
        void signForm(Form &form);
        class GradeTooLowException : public std::exception{
            public:
                virtual const char *what() const throw();
        };

	    class GradeTooHighException : public std::exception{
	        public:
		        virtual const char *what() const throw();
	    };
        
};
std::ostream & operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif
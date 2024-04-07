/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:49:00 by eaubry            #+#    #+#             */
/*   Updated: 2024/04/07 13:40:30 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP

#define AFORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Bureaucrat;

class AForm{

    private:
        const std::string name_;
        bool isSigned_;
        const int gradeToSign_;
        const int gradeToExecute_;
        
    public:
        AForm(void);
        AForm(AForm const &src);
        AForm(int gradeToSign, int gradeToExecute);
        AForm(const std::string name);
        AForm(std::string name, int gradeToSign, int gradeToExecute);

        
        ~AForm();
        

        AForm &operator=(AForm const &rhs);
        
        virtual void execute(Bureaucrat const &executor)const = 0;
        void beSigned(Bureaucrat &bureaucrat);
        int  isSigned() const;
        std::string getName() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        class GradeTooLowException : public std::exception{
            public:
                virtual const char *what() const throw();
        };

	    class GradeTooHighException : public std::exception{
	        public:
		        virtual const char *what() const throw();
	    };
        
        class FormNotSignedException : public std::exception{
            public:
                virtual const char *what() const throw();
        };
        
        class FormSignedException : public std::exception{
            public:
                virtual const char *what() const throw();
        };
};
std::ostream & operator<<(std::ostream &o, AForm const &rhs);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:49:00 by eaubry            #+#    #+#             */
/*   Updated: 2024/04/07 13:42:11 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP

#define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Bureaucrat;

class Form{

    private:
        const std::string name_;
        bool isSigned_;
        const int gradeToSign_;
        const int gradeToExecute_;
        
    public:
        Form(void);
        Form(Form const &src);
        Form(int gradeToSign, int gradeToExecute);
        Form(const std::string name);
        Form(std::string name, int gradeToSign, int gradeToExecute);

        
        ~Form();
        

        Form &operator=(Form const &src);
        
        void execute(Bureaucrat const &executor)const;
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
};
std::ostream & operator<<(std::ostream &o, Form const &rhs);

#endif
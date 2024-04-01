/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:49:00 by eaubry            #+#    #+#             */
/*   Updated: 2024/04/01 20:46:16 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP

#define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
    private:
        const std::string _name;
        bool _isSigned;
        const int _gradeToSign;
        const int _gradeToExecute;
    public:
        Form(void);
		Form(const Form &src);
		Form(int sign_grade, int exec_grade);
		Form(const std::string name);
		Form(const std::string name, int sign_grade, int exec_grade);
        ~Form();
        Form &operator=(Form const &rhs);
        void beSigned(Bureaucrat &bureaucrat);
        int  isSigned() const;
        std::string getName() const;
        int getSignGrade() const;
        int getExecGrade() const;
    class GradeTooLowException : public std::exception  {
	    public:
		    virtual const char *what() const throw();
	};

	class GradeTooHighException : public std::exception {
	    public:
		    virtual const char *what() const throw();
	};
};
std::ostream & operator<<(std::ostream &o, Form const &rhs);

#endif
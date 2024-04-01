/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:49:19 by eaubry            #+#    #+#             */
/*   Updated: 2024/04/01 20:45:40 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void): _name("default"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "Form Default Constructor called" << std::endl;
}

Form::Form(const Form &src): _name(src.getName() + "_copy"), _isSigned(false), _gradeToSign(src.getSignGrade()), _gradeToExecute(src.getExecGrade())
{
	std::cout << "Form Copy Constructor called to copy " << src.getName() <<
	" into " << this->getName() << std::endl;
	*this = src;
}

Form::Form(int sign_grade, int exec_grade): _name("default"), _isSigned(false), _gradeToSign(sign_grade), _gradeToExecute(exec_grade)
{
	std::cout << "Form Constructor called for " << this->getName() <<
	" with sign-grade of " << sign_grade << " and execution-grade of " << exec_grade <<
	std::endl;
	const int i = this->getSignGrade();
	const int j = this->getExecGrade();
	if (i > 150 || j > 150)
		throw(Form::GradeTooLowException());
	else if( i < 1 || j < 1)
		throw(Form::GradeTooHighException());
}

Form::Form(const std::string name): _name(name), _isSigned(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "Form Constructor called for " << this->getName() <<
	" with sign-grade of " << this->getSignGrade() <<
	" and execution-grade of " << this->getExecGrade() << std::endl;
}

Form::Form(const std::string name, int sign_grade, int exec_grade): _name(name), _isSigned(false), _gradeToSign(sign_grade), _gradeToExecute(exec_grade)
{
	std::cout << "Form Constructor called for " << this->getName() <<
	" with sign-grade of " << sign_grade << " and execution-grade of " << exec_grade <<
	std::endl;
	const int i = this->getSignGrade();
	const int j = this->getExecGrade();
	if (i > 150 || j > 150)
		throw(Form::GradeTooLowException());
	else if( i < 1 || j < 1)
		throw(Form::GradeTooHighException());
}


Form& Form::operator=(Form const &rhs)
{
    if (this != &rhs)
    {
        this->_isSigned = rhs._isSigned;
    }
    return *this;
}

Form::~Form()
{
    std::cout << "Form " << this->_name << " destroyed" << std::endl;
}

void Form::beSigned(Bureaucrat &bureaucrat) {
    if (this->_gradeToSign <= bureaucrat.getGrade())
    {
        this->_isSigned = true;
        std::cout << bureaucrat.getName() << " signed " << this->_name << std::endl;
    }
    else
        throw(bureaucrat.getGrade());
}

int Form::isSigned() const
{
    if (this->_isSigned == true)
        return 1;
    else
        return 0;
}

std::string Form::getName() const
{
    return this->_name;
}

int Form::getSignGrade() const
{
    return this->_gradeToSign;
}

int Form::getExecGrade() const
{
    return this->_gradeToExecute;
}

std::ostream & operator<<(std::ostream &o, Form const &rhs)
{
    o << rhs.getName() << ", form grade to signe " << rhs.getSignGrade() << ", form grade to execute " << rhs.getExecGrade() << ", form is signed " << rhs.isSigned() << std::endl;
    return o;
}
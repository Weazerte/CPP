/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:49:19 by eaubry            #+#    #+#             */
/*   Updated: 2024/04/05 17:59:56 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name_("default"), gradeToExecute_(150), gradeToSign_(150), isSigned_(false){}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : name_(name), gradeToSign_(gradeToSign), gradeToExecute_(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToSign > 150)
        throw(gradeToSign);
    else
    {
        this->isSigned_ = false;
        std::cout << "Form " << this->name_ << " created" << std::endl;
    }
}

Form::Form(Form const &src)
{
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


Form::Form(std::string name, int gradeToSign, int gradeToExecute) : name_(name), gradeToSign_(gradeToSign), gradeToExecute_(gradeToExecute)
{
    if (gradeToSign > 150 || gradeToExecute > 150)
    {
        this->isSigned_ = rhs.isSigned_;
    }
    return *this;
}

Form::~Form()
{
    std::cout << "Form " << this->name_ << " destroyed" << std::endl;
}

void Form::GradeTooHighException() const
{
    std::cout << "Error : Trying to create a to hight Form" << std::endl;
}

void Form::GradeTooLowException() const
{
    std::cout << "Error : Trying to create a to low Form" << std::endl;
}

void Form::beSigned(Bureaucrat &bureaucrat) {
    if (this->gradeToSign_ <= bureaucrat.getGrade())
    {
        this->_isSigned = true;
        std::cout << bureaucrat.getName() << " signed " << this->_name << std::endl;
    }
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

int Form::getGradetosigne() const
{
    return this->_gradeToSign;
}

int Form::getGradetoexecute() const
{
    return this->_gradeToExecute;
}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low");
};

const char *Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
};

std::ostream & operator<<(std::ostream &o, Form const &rhs)
{
    o << rhs.getName() << ", form grade to signe " << rhs.getGradetosigne() << ", form grade to execute " << rhs.getGradetoexecute() << ", form is signed " << rhs.isSigned() << std::endl;
    return o;
}
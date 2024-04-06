/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:49:19 by eaubry            #+#    #+#             */
/*   Updated: 2024/04/06 17:28:39 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name_("default"), gradeToExecute_(150), gradeToSign_(150), isSigned_(false){
    std::cout << "Form " << this->name_ << " created" << std::endl;
}

Form::Form(const Form &src): name_(src.getName() + "_copy"), isSigned_(false), gradeToSign_(src.getGradeToSign()), gradeToExecute_(src.getGradeToExecute())
{
	std::cout << "Form Copy Constructor called to copy " << src.getName() <<
	" into " << this->getName() << std::endl;
	*this = src;
}

Form::Form(int gradeToSign, int gradeToExecute): name_("default"), isSigned_(false), gradeToSign_(gradeToSign), gradeToExecute_(gradeToExecute)
{
	if ( gradeToSign_ > 150 || gradeToExecute_ > 150)
		throw(Form::GradeTooLowException());
	else if( gradeToSign_ < 1 || gradeToExecute_ < 1)
		throw(Form::GradeTooHighException());
    std::cout << "Form " << this->name_ << " created" << std::endl;
}

Form::Form(const std::string name): name_(name), isSigned_(false), gradeToSign_(150), gradeToExecute_(150)
{
	std::cout << "Form " << this->name_ << " created" << std::endl;
}

Form::Form(const std::string name, int gradeToSign, int gradeToExecute): name_(name), isSigned_(false), gradeToSign_(gradeToSign), gradeToExecute_(gradeToExecute)
{
	if ( gradeToSign_ > 150 || gradeToExecute_ > 150)
		throw(Form::GradeTooLowException());
	else if( gradeToSign_ < 1 || gradeToExecute_ < 1)
		throw(Form::GradeTooHighException());
        
        std::cout << "Form " << this->name_ << " created" << std::endl;
}

Form::~Form()
{
    std::cout << "Form " << this->name_ << " destroyed" << std::endl;
}

Form &Form::operator=(const Form &src)
{
	if (this == &src)
		return *this;
	return *this;
}

void Form::beSigned(Bureaucrat &bureaucrat) {
    if (this->gradeToSign_ <= bureaucrat.getGrade())
    {
        this->isSigned_ = true;
        std::cout << bureaucrat.getName() << " signed " << this->name_ << std::endl;
    }
}

int Form::isSigned() const
{
    if (this->isSigned_ == true)
        return 1;
    else
        return 0;
}

std::string Form::getName() const
{
    return this->name_;
}

int Form::getGradeToSign() const
{

    return this->gradeToSign_;
}

int Form::getGradeToExecute() const
{
    return this->gradeToExecute_;
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
    o << rhs.getName() << ", form grade to signe " << rhs.getGradeToSign() << ", form grade to execute " << rhs.getGradeToExecute() << ", form is signed " << rhs.isSigned() << std::endl;
    return o;
}
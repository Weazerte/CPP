/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 17:29:25 by eaubry            #+#    #+#             */
/*   Updated: 2024/04/06 17:31:07 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): name_("default"), gradeToExecute_(150), gradeToSign_(150), isSigned_(false){
    std::cout << "AForm " << this->name_ << " created" << std::endl;
}

AForm::AForm(const AForm &src): name_(src.getName() + "_copy"), isSigned_(false), gradeToSign_(src.getGradeToSign()), gradeToExecute_(src.getGradeToExecute())
{
	std::cout << "AForm Copy Constructor called to copy " << src.getName() <<
	" into " << this->getName() << std::endl;
	*this = src;
}

AForm::AForm(int gradeToSign, int gradeToExecute): name_("default"), isSigned_(false), gradeToSign_(gradeToSign), gradeToExecute_(gradeToExecute)
{
	if ( gradeToSign_ > 150 || gradeToExecute_ > 150)
		throw(AForm::GradeTooLowException());
	else if( gradeToSign_ < 1 || gradeToExecute_ < 1)
		throw(AForm::GradeTooHighException());
    std::cout << "AForm " << this->name_ << " created" << std::endl;
}

AForm::AForm(const std::string name): name_(name), isSigned_(false), gradeToSign_(150), gradeToExecute_(150)
{
	std::cout << "AForm " << this->name_ << " created" << std::endl;
}

AForm::AForm(const std::string name, int gradeToSign, int gradeToExecute): name_(name), isSigned_(false), gradeToSign_(gradeToSign), gradeToExecute_(gradeToExecute)
{
	if ( gradeToSign_ > 150 || gradeToExecute_ > 150)
		throw(AForm::GradeTooLowException());
	else if( gradeToSign_ < 1 || gradeToExecute_ < 1)
		throw(AForm::GradeTooHighException());
        
        std::cout << "AForm " << this->name_ << " created" << std::endl;
}

AForm::~AForm()
{
    std::cout << "AForm " << this->name_ << " destroyed" << std::endl;
}

AForm &AForm::operator=(const AForm &src)
{
	if (this == &src)
		return *this;
	return *this;
}

void AForm::beSigned(Bureaucrat &bureaucrat) {
    if (this->gradeToSign_ <= bureaucrat.getGrade())
    {
        this->isSigned_ = true;
        std::cout << bureaucrat.getName() << " signed " << this->name_ << std::endl;
    }
}

int AForm::isSigned() const
{
    if (this->isSigned_ == true)
        return 1;
    else
        return 0;
}

std::string AForm::getName() const
{
    return this->name_;
}

int AForm::getGradeToSign() const
{

    return this->gradeToSign_;
}

int AForm::getGradeToExecute() const
{
    return this->gradeToExecute_;
}

const char *AForm::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low");
};

const char *AForm::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
};

std::ostream & operator<<(std::ostream &o, AForm const &rhs)
{
    o << rhs.getName() << ", aform grade to signe " << rhs.getGradeToSign() << ", form grade to execute " << rhs.getGradeToExecute() << ", form is signed " << rhs.isSigned() << std::endl;
    return o;
}
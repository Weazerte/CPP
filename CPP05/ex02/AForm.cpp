/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:49:19 by eaubry            #+#    #+#             */
/*   Updated: 2024/04/05 18:06:00 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): name_("default"), gradeToExecute_(150), gradeToSign_(150), isSigned_(false){}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : name_(name), gradeToSign_(gradeToSign), gradeToExecute_(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToSign > 150)
        throw(gradeToSign);
    else
    {
        this->isSigned_ = false;
        std::cout << "Form " << this->name_ << " created" << std::endl;
    }
}

AForm::AForm(AForm const &src)
{
    *this = src;
}

AForm& AForm::operator=(AForm const &rhs)
{
    if (this != &rhs)
    {
        this->isSigned_ = rhs.isSigned_;
    }
    return *this;
}

AForm::~AForm()
{
    std::cout << "Form " << this->name_ << " destroyed" << std::endl;
}

void AForm::GradeTooHighException() const
{
    std::cout << "Error : Trying to create a to hight Form" << std::endl;
}

void AForm::GradeTooLowException() const
{
    std::cout << "Error : Trying to create a to low Form" << std::endl;
}

void AForm::beSigned(Bureaucrat &bureaucrat) {
    if (this->gradeToSign_ <= bureaucrat.getGrade())
    {
        this->isSigned_ = true;
        std::cout << bureaucrat.getName() << " signed " << this->name_ << std::endl;
    }
    else
        throw(bureaucrat.getGrade());
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

int AForm::getGradetosigne() const
{
    return this->gradeToSign_;
}

int AForm::getGradetoexecute() const
{
    return this->gradeToExecute_;
}

std::ostream & operator<<(std::ostream &o, AForm const &rhs)
{
    o << rhs.getName() << ", form grade to signe " << rhs.getGradetosigne() << ", form grade to execute " << rhs.getGradetoexecute() << ", form is signed " << rhs.isSigned() << std::endl;
    return o;
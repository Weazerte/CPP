/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:37:24 by eaubry            #+#    #+#             */
/*   Updated: 2024/03/25 14:35:53 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name_("default"), grade_(150) {
    std::cout << "Bureaucrat " << this->name_ << " created" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : name_(name){
    if (grade < 1 || grade > 150){
        throw(grade);
    }
    else {
        grade_ = grade;
        std::cout << "Bureaucrat " << this->name_ << ", grade " << this->grade_ << " created" << std::endl;
    }
}

Bureaucrat::Bureaucrat(Bureaucrat const &src){
    *this = src;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &rhs){
    if (this != &rhs)
    {
        this->grade_ = rhs.grade_;
    }
    return *this;
}

Bureaucrat::~Bureaucrat(){
     std::cout << "Bureaucrat " << this->name_ << ", grade " << this->grade_ << " destroyed" << std::endl;
}

std::string Bureaucrat::getName() const
{
    return this->name_;
}

int Bureaucrat::getGrade() const 
{
    return this->grade_;
}

void Bureaucrat::GadeTooHighException()
{
    std::cout << "Error : Trying to create a to hight Bureaucrate" << std::endl;
}

void Bureaucrat::GadeTooLowException()
{
     std::cout << "Error : Trying to create a to hight Bureaucrate" << std::endl;
}

void Bureaucrat::IncrementGrade(){
    if (this->grade_ == 1)
    {
        Bureaucrat::GadeTooHighException();
        return ;
    }
    this->grade_--;
}

void Bureaucrat::DecrementGrade()
{
    if (this->grade_ == 150)
    {
        Bureaucrat::GadeTooLowException();
        return ;
    }
    this->grade_++;
}

void Bureaucrat::signForm(Form &form)
{
    if (form.isSigned() == 0)
        std::cout << this->name_ << " couldn't sign " << form.getName() << ", grade to low" << std::endl;
    else
        std::cout << this->name_ << " signed " << form.getName() << std::endl;
}

std::ostream & operator<<(std::ostream &o, Bureaucrat const &rhs)
{
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return o;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:37:24 by eaubry            #+#    #+#             */
/*   Updated: 2024/05/13 13:44:50 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name_("default"), grade_(150) {
    std::cout << "Bureaucrat " << this->name_ << " grade " << this->getGrade() <<  " created" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : name_(src.getName() + "_copy"){
    std::cout << "Bureaucrat " << this->name_ << " grade " << this->getGrade() <<  " created" << std::endl;
    *this = src;
}

Bureaucrat::Bureaucrat(std::string const name) : name_(name), grade_(150){
    std::cout << "Bureaucrat " << this->name_ << " grade " << this->getGrade() <<  " created" << std::endl;
}

Bureaucrat::Bureaucrat(int grade) : name_("default"){
    if (grade < 1){
        throw Bureaucrat::GradeTooHighException();
    }
    else if (grade > 150){
        throw Bureaucrat::GradeTooLowException();
    }
    else {
        grade_ = grade;
        std::cout << "Bureaucrat " << this->name_ << " grade " << this->grade_ << " created" << std::endl;
    }
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : name_(name){
    if (grade < 1){
        throw Bureaucrat::GradeTooHighException();
    }
    else if (grade > 150){
        throw Bureaucrat::GradeTooLowException();
    }
    else {
        grade_ = grade;
        std::cout << "Bureaucrat " << this->name_ << ", grade " << this->grade_ << " created" << std::endl;
    }
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

void Bureaucrat::setGrade(int grade)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->grade_ = grade;
}

void Bureaucrat::IncrementGrade(){
    try
    {
        this->setGrade(this->grade_ - 1);
    }
    catch(const std::exception& e)
    {
        std::cerr <<  "\033[31mIncrementing grade of " << this->getName() <<
		" failed: " << e.what() << "\033[0m" << std::endl;
    }
}

void Bureaucrat::DecrementGrade()
{
    try
    {
        this->setGrade(this->grade_ + 1);
    }
    catch(const std::exception& e)
    {
        std::cerr <<  "\033[31mDecrementing grade of " << this->getName() <<
		" failed: " << e.what() << "\033[0m" << std::endl;
    }
}


const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("\033[31mGrade too low\033[0m");
};

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("\033[31mGrade too high\033[0m");
};

std::ostream & operator<<(std::ostream &o, Bureaucrat const &rhs)
{
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
    return o;
}
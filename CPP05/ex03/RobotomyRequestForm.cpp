/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:05:24 by eaubry            #+#    #+#             */
/*   Updated: 2024/04/07 12:24:03 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// Constructors
RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45), _target("default")
{
	std::cout << "RobotomyRequestForm Default Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm Constructor for target " << this->getTarget() << " called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &src): AForm("RobotomyRequestForm", 72, 45), _target(src.getTarget())
{
	std::cout << "RobotomyRequestForm Copy Constructor called to copy " << src.getName() <<
	" into " << this->getName() << std::endl;

	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Deconstructor " << this->getName() << " called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	std::cout << "RobotomyRequestForm Assignation operator called" << std::endl;
	if (this == &src)
		return *this;
	return *this;
}

static int robot_fail = 0;

void	RobotomyRequestForm::execute(Bureaucrat const &executor)const
{
	if ((int)executor.getGrade() > this->getGradeToExecute())
		throw (Bureaucrat::GradeTooLowException());
	else if (this->isSigned() == false)
		throw (AForm::FormNotSignedException());
	else if (robot_fail++ % 2)
		std::cout << "BRRRRRRRRRRRRRR\n" << this->getTarget() << " was robotomized" << std::endl;
	else
		std::cout << "Robotomy failed" << std::endl;
}

std::string	RobotomyRequestForm::getTarget(void)const
{
	return (this->_target);
}


std::ostream	&operator<<(std::ostream &o, RobotomyRequestForm *a)
{
	o << "Form " << a->getName() <<
	":\n\tsign-grade:\t" << a->getGradeToSign() <<
	"\n\texec-grade:\t" << a->getGradeToExecute() <<
	"\n\tis signed:\t" << a->isSigned() <<
	std::endl;
	return (o);
}
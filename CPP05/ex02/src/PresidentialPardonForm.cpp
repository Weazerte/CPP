/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:42:03 by eaubry            #+#    #+#             */
/*   Updated: 2024/04/27 16:04:51 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &src): AForm("PresidentialPardonForm", 25, 5), _target(src.getTarget()){
	*this = src;
}


PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {
    std::cout << "PresidentialPardonForm Assignation operator called" << std::endl;
    if (this != &rhs)
    {
        return *this;
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}


std::string PresidentialPardonForm::getTarget() const {
    return this->_target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    if (this->isSigned() == 0)
        throw AForm::FormNotSignedException();
    std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

std::ostream	&operator<<(std::ostream &o, PresidentialPardonForm *a){
	o << "Form " << a->getName() <<
	":\n\tsign-grade:\t" << a->getGradeToSign() <<
	"\n\texec-grade:\t" << a->getGradeToExecute() <<
	"\n\tis signed:\t" << a->isSigned() <<
	std::endl;
	return (o);
}
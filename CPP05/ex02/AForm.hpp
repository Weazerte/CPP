/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:49:00 by eaubry            #+#    #+#             */
/*   Updated: 2024/03/28 16:11:54 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP

#define FORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"

class AForm{
    private:
        const std::string name_;
        bool isSigned_;
        const int gradeToSign_;
        const int gradeToExecute_;
    public:
        AForm();
        AForm(std::string name, int gradeToSign, int gradeToExecute);
        AForm(AForm const &src);
        AForm &operator=(AForm const &rhs);
        ~AForm();
        virtual void GradeTooHighException() const;
        virtual void GradeTooLowException() const;
        virtual void beSigned(Bureaucrat &bureaucrat);
        virtual int  isSigned() const;
        virtual std::string getName() const;
        virtual int getGradeToSign() const;
        virtual int getGradeToExecute() const;
};
std::ostream & operator<<(std::ostream &o, AForm const &rhs);

#endif
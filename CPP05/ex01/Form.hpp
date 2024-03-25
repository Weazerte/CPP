/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:49:00 by eaubry            #+#    #+#             */
/*   Updated: 2024/03/25 18:05:08 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP

#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <stdexcept>

class Form{
    private:
        const std::string name_;
        bool isSigned_;
        const int gradeToSign_;
        const int gradeToExecute_;
    public:
        Form();
        Form(std::string name, int gradeToSign, int gradeToExecute);
        Form(Form const &src);
        Form &operator=(Form const &rhs);
        ~Form();
        void GradeTooHighException() const;
        void GradeTooLowException() const;
        void beSigned(Bureaucrat &bureaucrat);
        int  isSigned() const;
        std::string getName() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
};
std::ostream & operator<<(std::ostream &o, Form const &rhs);

#endif
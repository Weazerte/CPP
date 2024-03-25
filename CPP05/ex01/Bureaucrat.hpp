/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:37:15 by eaubry            #+#    #+#             */
/*   Updated: 2024/03/25 18:04:54 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP

#define BUREAUCRAT_HPP

#include "Form.hpp"

class Bureaucrat  {

    private :
        const std::string name_;
        int grade_;
    
    public :
        Bureaucrat();
        Bureaucrat(std::string const name, int grade);
        Bureaucrat(Bureaucrat const &src);
        ~Bureaucrat();
        Bureaucrat & operator=(Bureaucrat const &rhs);
        std::string getName() const;
        int getGrade() const;
        void GadeTooHighException();
        void GadeTooLowException();
        void IncrementGrade();
        void DecrementGrade();
        void signForm(Form &form);
        
};
std::ostream & operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif
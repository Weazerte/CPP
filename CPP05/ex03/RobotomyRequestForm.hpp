/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:05:31 by eaubry            #+#    #+#             */
/*   Updated: 2024/04/07 12:21:45 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <cstdlib>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class AFrom;

class RobotomyRequestForm: public AForm
{
	private:
		const std::string _target;
		RobotomyRequestForm(void);
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm &src);

		~RobotomyRequestForm();

		RobotomyRequestForm &operator=(const RobotomyRequestForm &src);

		void execute(Bureaucrat const &executor)const;

		std::string getTarget(void)const;

};

std::ostream	&operator<<(std::ostream &o, RobotomyRequestForm *a);

#endif
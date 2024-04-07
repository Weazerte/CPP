/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:42:14 by eaubry            #+#    #+#             */
/*   Updated: 2024/04/07 12:25:46 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP

#define PRESIDENTIALPARDONFORM_HPP


#include "AForm.hpp"

class Bureaucrat;

class AFrom;

class PresidentialPardonForm: public AForm
{
	private:
		const std::string _target;
		PresidentialPardonForm(void);
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm &src);

		~PresidentialPardonForm();
        
		PresidentialPardonForm &operator=(const PresidentialPardonForm &src);

		void execute(Bureaucrat const &executor)const;

		std::string getTarget(void)const;

};

std::ostream	&operator<<(std::ostream &o, PresidentialPardonForm *a);

#endif
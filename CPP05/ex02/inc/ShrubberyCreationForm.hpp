/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 13:44:49 by eaubry            #+#    #+#             */
/*   Updated: 2024/05/13 14:06:26 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP

#define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include <iostream>
#include <fstream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class AFrom;

class ShrubberyCreationForm: public AForm
{
	private:
		const std::string _target;
		ShrubberyCreationForm(void);
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm &src);
        
		~ShrubberyCreationForm();

		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);

		std::string getTarget(void)const;
        
		void execute(Bureaucrat const &executor)const;


};

#endif
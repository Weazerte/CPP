/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:39:10 by eaubry            #+#    #+#             */
/*   Updated: 2024/05/01 20:25:45 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERT_HPP
#define SCALARCONVERT_HPP

#include <string>
#include <iostream>
#include <limits>
#include <cmath>
#include <climits>
#include <cstdlib>
#include <cstring>

class ScalarConvert
{
	private:
		ScalarConvert();
		ScalarConvert(ScalarConvert const &src);
		ScalarConvert(std::string str);
		~ScalarConvert();

		ScalarConvert &operator=(ScalarConvert const &rhs);

	public:
		static void convert(std::string str);
		
		class ImpossibleException : public std::exception{
    		public:
        		virtual const char *what() const throw();
    	}; 

    	class nonDisplayableException : public std::exception{
    		public:
        		virtual const char *what() const throw();
    	};
};

#endif
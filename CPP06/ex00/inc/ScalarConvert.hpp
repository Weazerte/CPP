/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:39:10 by eaubry            #+#    #+#             */
/*   Updated: 2024/05/01 19:56:47 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
                virtual const char *what(std::string type) const throw();
        };	
		class nonDisplayableException : public std::exception{
            public:
                virtual const char *what(std::string type) const throw();
        };
};

#endif
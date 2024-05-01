/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 20:14:20 by eaubry            #+#    #+#             */
/*   Updated: 2024/04/18 21:00:31 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


void reverseChar(char &c)
{
    if (c >= 65 && c <= 90)
	    c = std::toupper(static_cast<unsigned char>(c));
    else if (c >= 97 && c <= 122)
	    c = std::tolower(static_cast<unsigned char>(c));
}

int main()
{
	char a[] = {'A', 'B', 'C'};

	std::cout << "Original:" <<
	"\n\ta[0]: " << a[0] <<
	"\n\ta[1]: " << a[1] <<
	"\n\ta[2]: " << a[2] <<
	std::endl << std::endl;

	::iter(a, sizeof(a) / sizeof(char), reverseChar);

	std::cout << "Changed:" <<
	"\n\ta[0]: " << a[0] <<
	"\n\ta[1]: " << a[1] <<
	"\n\ta[2]: " << a[2] <<
	std::endl << std::endl;

	::iter(a, 2, reverseChar);

	std::cout << "Changed:" <<
	"\n\ta[0]: " << a[0] <<
	"\n\ta[1]: " << a[1] <<
	"\n\ta[2]: " << a[2] <<
	std::endl << std::endl;
}
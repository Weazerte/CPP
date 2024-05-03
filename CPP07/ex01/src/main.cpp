/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 20:14:20 by eaubry            #+#    #+#             */
/*   Updated: 2024/05/03 12:06:28 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Iter.hpp"


void reverseChar(char &c)
{
    if (std::islower(c))
	    c = std::toupper(c);
    else if (std::isupper(c))
	    c = std::tolower(c);
}

struct printChar
{
	int i;
	printChar() : i(0) {}
	void operator()(const char &c)
	{
		std::cout << "\ni: " << i++ << " - ";
		std::cout << c;
	}
};

int main()
{
	char a[] = {'A', 'B', 'C'};
	printChar p;

	std::cout << "Original:";
	::iter(a, 3, p);

	::iter(a, 3, reverseChar);

	std::cout << "\nChanged:";
	::iter(a, 3, p);

	::iter(a, 3, reverseChar);
	
	std::cout << "\nChanged:";
	::iter(a, 3, p);
	
}
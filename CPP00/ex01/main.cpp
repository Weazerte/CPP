/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 21:37:29 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/16 17:15:34 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook 	phonebook1;
	std::string	str;

	while (str != "EXIT")
	{
		std::cout << "Type 1 or ADD to add a new contact " << std::endl << "Type 2 or SEARCH to find a contact already registered " << std::endl << "Type 3 or EXIT to exit this program" << std::endl;
		std::getline(std::cin, str);
		if (std::cin.eof())
        	std::exit(0);
		if (str == "ADD" || str == "1")
			phonebook1.Add();
		else if (str == "SEARCH" || str == "2")
			phonebook1.Search();
		else if (str == "EXIT" || str == "3")
			exit(0);
		else
			std::cout << "incorrect entry" << std::endl;
	}
	return (0);
}
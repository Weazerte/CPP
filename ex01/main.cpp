/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 21:37:29 by eaubry            #+#    #+#             */
/*   Updated: 2023/11/16 22:23:33 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	ft_is_exit(std::string s)
{
	if (s.empty())
		return 0;
	if (s == "EXIT")
		return 1;
	return 0;
}

int	ft_is_add_or_search(std::string s)
{
	if (s.empty())
		return 0;
	if (s == "SEARCH")
		return 1;
	if (s == "ADD")
		return 2;
	return 0;
}

int	main()
{
	int	exit;
	std::string input;

	exit = 0;
	while (exit == 0)
	{
		std::getline(std::cin, input);
		if (ft_is_exit(input) == 1)
		{
			return 0;
		}
		else if (ft_is_add_or_search(input) > 0)
		{
			
		}
	}
	return 0;
}
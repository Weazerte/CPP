/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpp00.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:56:00 by eaubry            #+#    #+#             */
/*   Updated: 2023/11/16 21:31:04 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return 0;
	}
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			av[i][j] = std::toupper(av[i][j]);
			j++;
		}
		std::cout << av[i];
		i++;
	}
	std::cout << std::endl;
	return 0;
}


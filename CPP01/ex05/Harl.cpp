/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:12:47 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/23 14:39:48 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

std::string const Harl::Wich[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

Harl::Harl(void)
{
	return;
}

Harl::~Harl(void)
{
	return;
}

void Harl::complain(std::string level)
{
	static void (Harl::*log[])(void) =
		{&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::size_t i;

	i = 0;
	while (i < 4 && Wich[i] != level)
		++i;

	if (i == 4)
	{
		std::cout << "...";

		return;
	}

	return (this->*log[i])();
}


void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}
       
void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl;
}
void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

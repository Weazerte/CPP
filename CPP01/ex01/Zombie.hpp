/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:45:22 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/31 14:14:11 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

#include <iostream>
# include <string>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		~Zombie();
		Zombie* newZombie( std::string name );
		void setName(std::string name);
		void announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif
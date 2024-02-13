/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:45:22 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/31 14:02:37 by eaubry           ###   ########.fr       */
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
		Zombie( std::string name );
		~Zombie();
		void    announce( void ) const ;
		Zombie* newZombie( std::string name );
		void    randomChump( std::string name );

};

Zombie  *newZombie( std::string name );
void    randomChump( std::string name );

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:45:22 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/18 15:50:43 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

#include <iostream>
# include <iostream>
# include <string>
# include <limits>
# include <csignal>
# include <cstdlib>
# include <cstring>
# include <iomanip>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(void);
		~Zombie(void);
		void SetName(std::string name);
		void announce( void ) const ;
		
};
Zombie* zombieHorde( int N, std::string name );

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:35:35 by eaubry            #+#    #+#             */
/*   Updated: 2024/02/07 14:16:32 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP

#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap :  public ClapTrap
{
    private:
        FragTrap();

    public:
        FragTrap( std::string name );
        ~FragTrap();
    
        void    HighFivesGuys(void);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:53:50 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/19 02:30:06 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <iostream>
# include <string>
# include <limits>
# include <csignal>
# include <cstdlib>
# include <cstring>
# include <iomanip>

class Weapon
{
    private:
        std::string Type;
    public:
        Weapon();
        Weapon(std::string name);
        std::string getType() const;
        void    setType(std::string type);
};

#endif
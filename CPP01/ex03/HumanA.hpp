/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:53:11 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/31 15:10:31 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon* weapon;
    public:
        HumanA();
        HumanA(std::string name, Weapon& weapon);
        void attack() const ;
};

#endif
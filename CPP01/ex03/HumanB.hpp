/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:38:38 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/18 17:49:08 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon &Weapon;
    public:
        HumanB(std::string name);
        void setWeapon(Weapon &Weapon);
        void attack() const;
}
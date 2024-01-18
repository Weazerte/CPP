/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:53:11 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/18 17:49:14 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon &Weapon;
    public:
        HumanA(std::string name, Weapon &weapon);
        void attack() const ;
}
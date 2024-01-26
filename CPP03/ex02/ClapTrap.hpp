/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:43:02 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/25 18:58:11 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP

#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    protected:
        std::string name;
        int HitPoint;
        int Energy;
        int AttackDmg;
        
        ClapTrap();
    public:
        ClapTrap(std::string name);
        ~ClapTrap();
        
        ClapTrap(const ClapTrap &);
        ClapTrap &operator=(const ClapTrap& rhs);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        int getAttackDmg(void);
        int getEnergy(void);
        std::string getName(void);
        int getHp();
        void setAttack(unsigned int amount);
        
        

};

#endif
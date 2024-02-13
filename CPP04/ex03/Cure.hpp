/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:38:53 by eaubry            #+#    #+#             */
/*   Updated: 2024/02/07 14:39:12 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
public:
Cure();
Cure(Cure const &src);
virtual ~Cure();
Cure & operator=(Cure const &rhs);
virtual AMateria* clone() const;
virtual void use(ICharacter& target);
};

#endif
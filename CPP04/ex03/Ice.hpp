/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:37:03 by eaubry            #+#    #+#             */
/*   Updated: 2024/02/07 14:41:39 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
public:
Ice();
~Ice();
Ice(Ice const &src);
Ice & operator=(Ice const &rhs);
virtual AMateria* clone() const;
virtual void use(ICharacter& target);
};

#endif
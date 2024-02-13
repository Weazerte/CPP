/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:36:04 by eaubry            #+#    #+#             */
/*   Updated: 2024/02/12 15:05:50 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(AMateria const & src);
        AMateria&     operator=(AMateria const &rhs);
        virtual ~AMateria();

        std::string const & getType() const;
        virtual AMateria*   clone() const = 0;
        virtual void        use(ICharacter& target);
};

#endif

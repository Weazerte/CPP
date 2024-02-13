/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:12:13 by eaubry            #+#    #+#             */
/*   Updated: 2024/02/12 15:51:15 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        _materias[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        if (_materias[i] != NULL)
            delete _materias[i];
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
    *this = src;
}

MateriaSource& MateriaSource::operator=( MateriaSource const & rhs )
{
    if (this != &rhs)
    {
        for (int i = 0; i < 4; i++)
            _materias[i] = rhs._materias[i];
    }
    return *this;
}

AMateria* MateriaSource::getMateria( std::string const & type )
{
    for (int i = 0; i < 4; i++)
        if (_materias[i] && _materias[i]->getType() == type)
            return _materias[i];
    return NULL;
}

void    MateriaSource::learnMateria( AMateria* m )
{
    for (int i = 0; i < 4; i++)
        if (_materias[i] == NULL)
        {
            _materias[i] = m;
            return;
        }
}

AMateria*   MateriaSource::createMateria( std::string const& type ) {
    for ( int i = 0; i < 4; i++ )
        if ( _materias[i] && _materias[i]->getType() == type )
            return _materias[i]->clone();
    return NULL;
}
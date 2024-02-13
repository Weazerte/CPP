/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:11:26 by eaubry            #+#    #+#             */
/*   Updated: 2024/02/12 12:08:02 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* _materias[4];
    public:
        MateriaSource();
        virtual ~MateriaSource();
        MateriaSource(MateriaSource const &src);
        MateriaSource & operator=(MateriaSource const &rhs);
        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const & type);
        AMateria* getMateria( std::string const & type );
};

#endif
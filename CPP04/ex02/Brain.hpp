/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:55:57 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/29 15:56:14 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP

#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain( Brain const & src );
        virtual ~Brain();
        Brain & operator=( Brain const & rhs );
        std::string getIdea( int i ) const;
        void setIdea( int i, std::string idea );
};

#endif
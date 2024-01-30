/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:56:25 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/30 14:30:12 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain( Brain const & src ) {
    std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}

Brain & Brain::operator=( Brain const & rhs ) {
    std::cout << "Brain assignation operator called" << std::endl;
    if ( this != &rhs ) {
        for ( int i = 0; i < 100; i++ ) {
            this->ideas[i] = rhs.ideas[i];
        }
    }
    return *this;
}

std::string Brain::getIdea( int i ) const {
    return this->ideas[i];
}

void Brain::setIdea( int i, std::string idea ) {
    this->ideas[i] = idea;
}

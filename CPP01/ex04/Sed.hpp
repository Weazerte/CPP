/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:33:46 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/30 16:45:26 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>

class Sed
{
private:
    std::string _inFile;
    std::string _outFile;

public:
    Sed( std::string filename);
    ~Sed();

    void            replace( std::string s1, std::string s2);
};

#endif
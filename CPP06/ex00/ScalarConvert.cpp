/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:55:35 by eaubry            #+#    #+#             */
/*   Updated: 2024/04/08 16:26:41 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

ScalarConvert::ScalarConvert() {
}

ScalarConvert::ScalarConvert(ScalarConvert const &src) {
    *this = src;
}

ScalarConvert::ScalarConvert(std::string str) {
    convert(str);
}

ScalarConvert::~ScalarConvert() {
}

ScalarConvert &ScalarConvert::operator=(ScalarConvert const &rhs) {
    if (this != &rhs) {
        *this = rhs;
    }
    return *this;
}

void ScalarConvert::convert(std::string str) {
    
    std::cout << "char: ";
    try {
        char c = static_cast<char>(std::stoi(str));
        if (c < 32 || c > 126) {
            std::cout << "Non displayable" << std::endl;
        } else {
            std::cout << "'" << c << "'" << std::endl;
        }
    } catch (std::exception &e) {
        std::cout << "impossible" << std::endl;
    }
    
    std::cout << "int: ";
    try {
        int i = std::stoi(str);
        std::cout << i << std::endl;
    } catch (std::exception &e) {
        std::cout << "impossible" << std::endl;
    }
    
    std::cout << "float: ";
    try {
        float f = std::stof(str);
        std::cout << std::fixed << std::setprecision(1) << f << "f" << std::endl;
    } catch (std::exception &e) {
        std::cout << "impossible" << std::endl;
    }
    
    std::cout << "double: ";
    try {
        double d = std::stod(str);
        std::cout << std::fixed << std::setprecision(1) << d << std::endl;
    } catch (std::exception &e) {
        std::cout << "impossible" << std::endl;
    }
}
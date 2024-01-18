/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:19:49 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/18 16:40:51 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    std::string& stringREF = brain;
    
    std::cout << "Adress of the string : " << static_cast<const void*>(brain.data()) << std::endl;
    std::cout << "Adress of the string using reference : " << &stringREF << std::endl;
    std::cout << "Adress of the string using pointer : " << stringPTR << std::endl;
    return (0);
}
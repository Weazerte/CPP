/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 02:34:13 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/19 03:43:47 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void remplacerSubstring(std::string& texte, const std::string& ancien, const std::string& nouveau) {
    size_t position = texte.find(ancien);

    while (position != std::string::npos) {
        texte = texte.substr(0, position) + nouveau + texte.substr(position + ancien.length());
        position = texte.find(ancien, position + nouveau.length());
    }
}

int main(int ac, char **av) {
    if (ac == 4)
    {
        std::string filename = (const char *)av[1];
        std::ifstream fichierLecture(filename);
        if (!filename.is_open())
        {
            std::cerr << "File name error" << std::endl;
            return 0;
        }
        std::string s1 = (const char *)av[2];
        std::string s2 = (const char *)av[3];
        //copier le texte dans une string 
        //envoyer le texte dans un autre file
        remplacerSubstring(texte, ancienMot, nouveauMot);

        std::cout << texte << std::endl;
    }
    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 02:34:13 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/23 14:09:48 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void remplacerSubstring(std::string& texte, const std::string& ancien, const std::string& nouveau)
{
    size_t position = texte.find(ancien);

    while (position != std::string::npos) {
        texte = texte.substr(0, position) + nouveau + texte.substr(position + ancien.length());
        position = texte.find(ancien, position + nouveau.length());
    }
}

int main(int ac, char **av) {
    if (ac == 4)
    {
        const char *filename = av[1];
        std::string s1 = (const char *)av[2];
        std::string s2 = (const char *)av[3];
        std::ifstream infile(filename);
        if (!infile.is_open())
        {
            std::cerr << "erreur lors de l'ouverture du fichier d'entre" << std::endl;
            return 0;
        }
        std::string texte((std::istreambuf_iterator<char>(infile)), std::istreambuf_iterator<char>());
        remplacerSubstring(texte, s1, s2);
        std::fstream outfile("outfile", std::ios::out);
        if (outfile.is_open())
        {
            outfile << texte << std::endl;
        }
        else
        {
            std::cerr << "erreur lors de l'ouverture du fichier de sortie" << std::endl;
            infile.close();
            return 0;
        }
        infile.close();
        outfile.close();
    }
    return 0;
}
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 21:01:28 by eaubry            #+#    #+#              #
#    Updated: 2023/11/16 21:34:12 by eaubry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nom du compilateur
CXX = c++

# Options de compilation
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

# Nom de l'exécutable
TARGET = megaphone

# Liste des fichiers source
SOURCES = main.cpp

# Générer la liste des fichiers objets
OBJECTS = $(SOURCES:.cpp=.o)

# Règle par défaut
all: $(TARGET)

# Règle de compilation
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJECTS)

# Règle de génération des fichiers objets
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Nettoyer les fichiers temporaires
clean:
	rm -f $(TARGET) $(OBJECTS)
	

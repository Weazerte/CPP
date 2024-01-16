# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 21:01:28 by eaubry            #+#    #+#              #
#    Updated: 2024/01/16 17:29:22 by eaubry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nom du compilateur
CXX = c++

# Options de compilation
CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -g3

# Nom de l'exécutable
TARGET = PhoneBook

# Liste des fichiers source
SOURCES = main.cpp PhoneBook.cpp Contact.cpp

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
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(TARGET) $(OBJECTS)

re: fclean all
	
.PHONY:	all clean fclean re bonus

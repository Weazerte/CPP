# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/31 14:19:25 by eaubry            #+#    #+#              #
#    Updated: 2024/01/31 14:20:21 by eaubry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brainz

SRC = main.cpp  Zombie.cpp zombieHorde.cpp 
OBJ = $(SRC:.cpp=.o)

CXX = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

%.o	: %.cpp
	@$(CXX) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	@$(CXX) $(FLAGS) $(OBJ) -o $(NAME)

all	: $(NAME)

clean :
	@rm -rf $(OBJ)
fclean: clean
	@rm -rf $(NAME)
re: fclean all

.PHONY : all clean fclean re

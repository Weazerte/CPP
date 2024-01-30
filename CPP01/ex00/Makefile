# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                             
               :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/16 17:39:53 by eaubry            #+#    #+#              #
#    Updated: 2024/01/18 15:36:05 by eaubry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = braniz

SRC = main.cpp  Zombie.cpp newZombie.cpp randomChump.cpp
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

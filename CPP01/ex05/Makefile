# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/19 02:34:03 by eaubry            #+#    #+#              #
#    Updated: 2024/01/31 15:36:12 by eaubry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl

SRC = main.cpp Harl.cpp
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

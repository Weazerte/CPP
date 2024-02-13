# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/23 14:43:02 by eaubry            #+#    #+#              #
#    Updated: 2024/01/31 15:51:41 by eaubry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

SRC = main.cpp Fixed.cpp
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

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/22 16:48:26 by eaubry            #+#    #+#              #
#    Updated: 2024/04/01 19:48:12 by eaubry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Form

SRC = Bureaucrat.cpp Form.cpp main.cpp 
OBJ = $(SRC:.cpp=.o)

CXX = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

%.o	: %.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CXX) $(FLAGS) $(OBJ) -o $(NAME)

all	: $(NAME)

clean :
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all

.PHONY : all clean fclean re

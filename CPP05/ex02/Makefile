# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/22 16:48:26 by eaubry            #+#    #+#              #
#    Updated: 2024/05/13 13:56:50 by eaubry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Form

SRCS = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

SHRUBBERY	=	$(shell find . -name '*_shrubbery')

CFLAGS     = -Wall -Wextra -Werror -g3 -std=c++98
OBJ_DIR = obj
INCLUDES_FOLDER = inc/
SRC_FOLDER = src/

HEADERS       = $(wildcard $(INCLUDES_FOLDER)*.hpp)

OBJS    = $(SRCS:%.cpp=$(OBJ_DIR)/%.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CFLAGS) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_FOLDER)%.cpp $(HEADERS) | $(OBJ_DIR)
	$(CXX) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $@

clean:
	rm -rf $(OBJS) $(OBJ_DIR)
	rm -f $(SHRUBBERY)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:            all clean fclean re

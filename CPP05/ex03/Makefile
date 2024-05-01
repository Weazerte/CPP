# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/22 16:48:26 by eaubry            #+#    #+#              #
#    Updated: 2024/04/27 15:58:54 by eaubry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME     = Bureaucrat
CC         = c++
CFLAGS     = -Wall -Wextra -Werror -g3 -std=c++98
SRCS     =  main.cpp \
		Intern.cpp \
		Bureaucrat.cpp \
		AForm.cpp \
		ShrubberyCreationForm.cpp \
		RobotomyRequestForm.cpp \
		PresidentialPardonForm.cpp \
		
OBJ_DIR = obj
INCLUDES_FOLDER = inc/
SRC_FOLDER = src/

HEADERS = $(wildcard $(INCLUDES_FOLDER)*.hpp)

OBJS = $(SRCS:%.cpp=$(OBJ_DIR)/%.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_FOLDER)%.cpp $(HEADERS) | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:            all clean fclean re
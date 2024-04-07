# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/22 16:48:26 by eaubry            #+#    #+#              #
#    Updated: 2024/04/07 13:34:50 by eaubry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Form

SRC =	main.cpp \
		Intern.cpp \
		Bureaucrat.cpp \
		AForm.cpp \
		ShrubberyCreationForm.cpp \
		RobotomyRequestForm.cpp \
		PresidentialPardonForm.cpp \
		
OBJ = $(SRC:.cpp=.o)

SHRUBBERY	=	$(shell find . -name '*_shrubbery')

CXX = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

%.o	: %.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CXX) $(FLAGS) $(OBJ) -o $(NAME)

all	: $(NAME)

clean :
	rm -rf $(OBJ)
	rm -rf $(SHRUBBERY)
fclean: clean
	rm -rf $(NAME)
re: fclean all

.PHONY : all clean fclean re

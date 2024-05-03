NAME = whatever

SRCS =	main.cpp \

CC          = c++
CFLAGS      = -Wall -Wextra -Werror -g3 -std=c++98
OBJ_DIR     = obj
INCLUDES_FOLDER = inc/
SRC_FOLDER  = src/

HEADERS     = $(wildcard $(INCLUDES_FOLDER)*.hpp)

OBJS        = $(SRCS:%.cpp=$(OBJ_DIR)/%.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_FOLDER)%.cpp $(HEADERS) | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $@

clean:
	rm -rf $(OBJS) $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
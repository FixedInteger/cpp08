NAME = ex00
SRC = main.cpp 

OBJ = $(SRC:.cpp=.o)

C++ = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98


START = @echo "\033[33m"
END = @echo "\033[0m"
all: $(NAME)



$(NAME): $(OBJ)
	$(C++) $(CFLAGS) -o $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean :
	rm -f $(NAME)

re : fclean all
.PHONY: all clean fclean re
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
NAME = reference
SRC= main.cpp
OBJ= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -r $(NAME)

re: fclean all

.PHONY: all clean fclean re
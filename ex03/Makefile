# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agengemb <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/12 16:26:44 by agengemb          #+#    #+#              #
#    Updated: 2023/06/12 16:26:46 by agengemb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98 -MMD
NAME = useless_violence
SRC= Weapon.cpp HumanA.cpp HumanB.cpp main.cpp
OBJ= $(SRC:.cpp=.o)
DEP= ${OBJ:.o=.d}

all: $(NAME)

-include $(DEP)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ) $(DEP)

fclean: clean
	rm -r $(NAME)

re: fclean all

.PHONY: all clean fclean re

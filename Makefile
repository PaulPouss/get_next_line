# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ppousser <ppousser@student.42urduliz.      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/04 13:50:34 by ppousser          #+#    #+#              #
#    Updated: 2026/03/05 15:47:09 by ppousser         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line


CC = cc
CFLAGS = -Wall -Wextra -Werror -I./includes -D BUFFER_SIZE=42
SRC = get_next_line.c  get_next_line_utils.c 

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)


fclean: clean
	rm -f $(NAME)


re: fclean all


.PHONY: all clean fclean re

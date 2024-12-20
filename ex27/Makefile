# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbanzo-s <fbanzo-s@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/20 17:58:32 by fbanzo-s          #+#    #+#              #
#    Updated: 2024/12/20 17:58:32 by fbanzo-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_display_file.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) Makefile
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
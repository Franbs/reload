# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbanzo-s <fbanzo-s@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/19 14:01:14 by fbanzo-s          #+#    #+#              #
#    Updated: 2024/12/19 14:01:21 by fbanzo-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = srcs
INC_DIR = includes
SRC_F = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
SRC = $(addprefix $(SRC_DIR)/, $(SRC_F))

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) Makefile
	ar rcs $(NAME) $(OBJ)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

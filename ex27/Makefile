# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbanzo-s <fbanzo-s@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/20 17:58:32 by fbanzo-s          #+#    #+#              #
#    Updated: 2025/01/11 14:02:28 by fbanzo-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRCS = ft_display_file.c

CFLAGS = -Wall -Wextra -Werror
CC = cc
AR = ar -rcs

OBJDIR = build
OBJS = $(addprefix $(OBJDIR)/, ${SRCS:.c=.o})

PURPLE = \033[0;35m
BLUE   = \033[0;34m
RESET  = \033[m

all: $(NAME)

$(OBJDIR)/%.o : %.c | $(OBJDIR)
	@printf "%-42b%b" "$(PURPLE)$(<):" "$(BLUE)$(@F)$(RESET)\n"
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	@mkdir -p $(OBJDIR)

$(NAME): $(OBJS)
	@printf "%-42b%b" "$(PURPLE)$(*F):" "$(BLUE)$(@)$(RESET)\n"
	@$(CC) $(OBJS) $(CFLAGS) -o $@ 

fclean: clean
	@printf "%b" "$(BLUE)$(@)ing...$(RESET)\n"
	@rm -rf $(NAME)

clean:
	@printf "%b" "$(BLUE)$(@)ing...$(RESET)\n"
	@rm -rf $(OBJDIR)

re:    fclean all

.PHONY: all clean fclean re

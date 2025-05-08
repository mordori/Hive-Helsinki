# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/02 20:18:54 by myli-pen          #+#    #+#              #
#    Updated: 2025/05/08 20:53:51 by myli-pen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.DEFAULT_GOAL = all
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
MAKEFLAGS += --no-print-directory
DIR_INC = ./includes/
DIR_SRC = ./src/
DIR_LIB = ./libft/
LIB = libft.a
TEST = main.c

SRCS =	$(wildcard $(DIR_SRC)ft_*.c)
OBJS = $(SRCS:.c=.o)

all: lib $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "\033[1;33m [✔] $(NAME) created \033[0m"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@ -I$(DIR_INC)

clean:
	@rm -rf $(OBJS)
	@echo "\033[1;31m [-]\033[0m removed ft_printf .o files"

fclean: clean
	@rm -rf $(NAME)
	@rm -rf a.out
	@echo "\033[1;31m [-]\033[0m removed $(NAME)"
	@make fclean -C $(DIR_LIB)

re: fclean all

lib:
	@make -C $(DIR_LIB)
	@echo "\033[1;32m [+]\033[0m compiling $(NAME)"

test: $(NAME)
	@$(CC) -g $(CFLAGS) $(TEST) $(NAME) $(LIB) -I$(DIR_INC)
	@echo ""
	@./a.out

debug: test
	@gdb -tui ./a.out

.SECONDARY: $(OBJS)
.PHONY: all clean fclean re lib test debug

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/02 20:18:54 by myli-pen          #+#    #+#              #
#    Updated: 2025/05/07 22:35:55 by myli-pen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.DEFAULT_GOAL = all
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
DIR_INC = ./includes/
DIR_SRC = ./src/
DIR_LIB = ./libft/
LIB = libft.a
TEST = main.c

SRCS =	$(wildcard $(DIR_SRC)ft_*.c)
OBJS = $(SRCS:.c=.o)

all: create_lib $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "\033[1;33m [✔] $(NAME) created \033[0m"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@ -I$(DIR_INC) -I$(DIR_LIB)
	@echo "\033[1;32m [+] \033[0mcompiling $@"

clean:
	@rm -rf $(OBJS)
	@echo "\033[1;31m [-]\033[0m removed ft_printf .o files"
	@make clean -C $(DIR_LIB)

fclean: clean
	@rm -rf $(NAME)
	@rm -rf $(DIR_SRC)a.out
	@rm -rf a.out
	@echo "\033[1;31m [-]\033[0m removed $(NAME)"
	@make fclean -C $(DIR_LIB)

re: fclean all

create_lib:
	@make -C $(DIR_LIB)

test: $(NAME)
	$(CC) -lbsd -g $(CFLAGS) $(TEST) $(NAME) $(LIB) -I$(DIR_INC) -I$(DIR_LIB)
	@echo ""
	@./a.out

debug:
	@$(CC) -lbsd -g $(FLAGS) $(NAME)
	@gdb -tui ./a.out

.SECONDARY: $(OBJS)
.PHONY: all clean fclean re create_lib test debug

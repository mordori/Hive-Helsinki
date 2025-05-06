# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/02 20:18:54 by myli-pen          #+#    #+#              #
#    Updated: 2025/05/06 17:41:18 by myli-pen         ###   ########.fr        #
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

SRCS =	$(addprefix $(DIR_SRC), ft_*.c)
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "\033[1;33m [✔] $(NAME) created \033[0m"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@ -L$(DIR_LIB) $(LIB) -I$(DIR_INC)
	@echo "\033[1;32m [+] \033[0mcompiling $@"

clean:
	@rm -rf $(OBJS)
	@echo "\033[1;31m [-]\033[0m removed .o files"

fclean: clean
	@rm -rf $(NAME)
	@rm -rf $(LIB)
	@rm -rf a.out
	@echo "\033[1;31m [-]\033[0m removed $(LIB)"
	@echo "\033[1;31m [-]\033[0m removed $(NAME)"

re: fclean all

test: $(NAME)
	@$(CC) -lbsd -g $(CFLAGS) -L$(DIR_LIB) $(LIB) -I$(DIR_INC)
	@echo ""
	@./a.out

debug:
	@$(CC) -lbsd -g $(FLAGS) $(NAME)
	@gdb -tui ./a.out

.SECONDARY: $(OBJS)
.PHONY: all clean fclean re test debug

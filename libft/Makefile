# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/02 20:18:54 by myli-pen          #+#    #+#              #
#    Updated: 2025/05/08 04:53:04 by myli-pen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.DEFAULT_GOAL = all
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
DIR_SRC = ./src/
DIR_TEST = ./tests/
TEST = default
TEST_FILE = $(DIR_TEST)test_$(TEST).c
TEST_UTILS = $(DIR_TEST)libft_tests.c

SRCS =	$(wildcard $(DIR_SRC)ft_*.c)
OBJS = $(SRCS:.c=.o)

BONUS_SRCS = $(wildcard $(DIR_SRC)ft_*_bonus.c)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "\033[1;33m [✔] $(NAME) created \033[0m"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "\033[1;32m [+] \033[0mcompiling $@"

clean:
	@rm -rf $(OBJS)
	@echo "\033[1;31m [-]\033[0m removed .o files"

fclean: clean
	@rm -rf $(NAME)
	@rm -rf a.out
	@rm -rf $(DIR_SRC)/a.out
	@rm -rf $(DIR_SRC)/$(NAME)
	@echo "\033[1;31m [-]\033[0m removed $(NAME)"

re: fclean all

bonus : $(OBJS) $(BONUS_OBJS) $(NAME)
	@ar -rc $(NAME) $(OBJS) $(BONUS_OBJS)

test: $(NAME)
	@$(CC) -lbsd -g $(CFLAGS) $(TEST_FILE) $(TEST_UTILS) -L. $(NAME) -I$(DIR_SRC)
	@echo ""
	@./a.out

.SECONDARY: $(OBJS) $(OBJS_BONUS)
.PHONY: all clean fclean re bonus test

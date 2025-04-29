CFLAGS = -Wall -Wextra -Werror

SRCS =	$(wildcard ft_*.c)

BONUS_SRCS = $(wildcard ft_*.c)

OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

TEST = default

TEST_FILE = ./tests/test_$(TEST).c

TEST_UTILS = ./tests/libft_tests.c

NAME = libft.a

.SECONDARY: $(OBJS)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "\033[1;33m [✔] $(NAME) created \033[0m"

%.o: %.c
	@cc $(CFLAGS) -c $< -o $@
	@echo "\033[1;32m [+] \033[0mcompiling $@"

clean:
	@rm -rf $(OBJS)
	@echo "\033[1;31m [-] removed .o files \033[0m"

fclean: clean
	@rm -rf $(NAME)
	@rm -rf ./a.out
	@rm -rf .bonus
	@echo "\033[1;31m [-] removed $(NAME) \033[0m"

re: fclean all

bonus : .bonus

.bonus : $(OBJS) $(BONUS_OBJS)
	@touch .bonus
	@ar -rc $(NAME) $(BONUS_OBJS)

test: $(NAME) $(TEST_FILE) clean
#	@code ./ft_$(TEST).c
	@cc -lbsd -g $(CFLAGS) $(TEST_FILE) $(TEST_UTILS) $(NAME)
	@echo ""
	@./a.out

debug:
	@ cc -lbsd -g $(FLAGS) $(TEST_FILE) $(TEST_UTILS) $(NAME)
	@ gdb -tui ./a.out

.PHONY: all clean fclean re bonus test debug

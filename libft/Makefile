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
	@echo "$(NAME) created"

%.o: %.c
	@cc $(CFLAGS) -c $< -o $@
	@echo "compiling $@"

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)
	@rm -rf ./a.out
	@rm -rf .bonus
	@echo "removed $(NAME)"

re: fclean all

bonus : .bonus

.bonus : $(OBJS) $(BONUS_OBJS)
	@touch .bonus
	@ar -rc $(NAME) $(BONUS_OBJS)

test: $(NAME) $(TEST_FILE) clean
	@code ./ft_$(TEST).c
	@cc -lbsd $(CFLAGS) $(TEST_FILE) $(TEST_UTILS) $(NAME)
	@echo ""

debug:

.PHONY: all clean fclean re test debug bonus

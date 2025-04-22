CFLAGS = -Wall -Wextra -Werror

SRCS =	$(wildcard ft_*.c)

OBJS = $(SRCS:.c=.o)

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
	@echo "removed $(NAME)"

re: fclean all

test: $(NAME) $(TEST_FILE)
	@code ./ft_$(TEST).c
	@cc -lbsd $(CFLAGS) $(TEST_FILE) $(TEST_UTILS) $(NAME)
	@echo ""
	@./a.out

debug:
	@rm a.out

bonus:


.PHONY: all clean fclean re test debug bonus

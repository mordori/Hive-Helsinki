CFLAGS = -Wall -Wextra -Werror

SRCS =	$(wildcard ft_*.c) \

OBJS = $(SRCS:.c=.o)

TESTS = default

TEST_FILE = ./tests/test_$(TEST).c

NAME = libft.a

.SECONDARY: $(OBJS)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "$(NAME) created"

%.o: %.c
	cc $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)
	@echo "removed $(NAME)"

re: fclean all

test: clean
	@cc -lbsd -g $(CFLAGS) $(TEST_FILE) $(NAME)
	@cat $(TEST_FILE) | pygmentize -l c -O style=monokai | sed 's/\t/    /g'
	@./a.out
	@.code ./ft_$(TEST).c
	@rm a.out

debug:


bonus:


.PHONY: all clean fclean re test debug bonus

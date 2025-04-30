.DEFAULT_GOAL = all

SRCS =	ft_atoi.c ft_isalpha.c ft_itoa.c ft_memmove.c ft_putnbr_fd.c \
		ft_bzero.c ft_isascii.c ft_memchr.c ft_memset.c ft_toupper.c \
		ft_calloc.c ft_isdigit.c ft_memcmp.c ft_putchar_fd.c \
		ft_isalnum.c ft_isprint.c ft_memcpy.c ft_putendl_fd.c \
		ft_strdup.c ft_strlcpy.c ft_strnstr.c ft_tolower.c \
		ft_putstr_fd.c ft_striteri.c ft_strlen.c ft_strrchr.c \
		ft_split.c ft_strjoin.c ft_strmapi.c ft_strtrim.c \
		ft_strchr.c ft_strlcat.c ft_strncmp.c ft_substr.c

OBJS = $(SRCS:.c=.o)

TEST = undefined
TEST_DIR = tests
TEST_FILE = $(TEST_DIR)/test_$(TEST).c
TEST_UTILS = $(TEST_DIR)/libft_tests.c

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

.SECONDARY: $(OBJS)

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
	@echo "\033[1;31m [-]\033[0m removed $(NAME)"

re: fclean all

test: $(NAME) $(TEST_FILE)
	@code ft_$(TEST).c
	@$(CC) -lbsd -g $(CFLAGS) $(TEST_FILE) $(TEST_UTILS) $(NAME)
	@echo ""
	@./a.out

.PHONY: all clean fclean re test

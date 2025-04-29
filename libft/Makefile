.DEFAULT_GOAL = all

SRC_DIR = src
SRCS =	$(wildcard $(SRC_DIR)/ft_*.c)
OBJS = $(SRCS:.c=.o)
BONUS_SRCS = $(wildcard $(SRC_DIR)/ft_*.c)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

TEST = default
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
	@rm -rf $(SRC_DIR)/a.out
	@rm -rf $(SRC_DIR)/$(NAME)
	@rm -rf .bonus
	@echo "\033[1;31m [-]\033[0m removed $(NAME)"

re: fclean all

bonus : .bonus

.bonus : $(OBJS) $(BONUS_OBJS)
	@touch .bonus
	@ar -rc $(NAME) $(BONUS_OBJS)

test: $(NAME) $(TEST_FILE)
#	@code $(SRC_DIR)/ft_$(TEST).c
	@$(CC) -lbsd -g $(CFLAGS) $(TEST_FILE) $(TEST_UTILS) $(NAME)
	@echo ""
	@./a.out

debug:
	@$(CC) -lbsd -g $(FLAGS) $(TEST_FILE) $(TEST_UTILS) $(NAME)
	@gdb -tui ./a.out

.PHONY: all clean fclean re bonus .bonus test debug

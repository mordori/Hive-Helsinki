CFLAGS = -Wall -Wextra -Werror

SRCS =	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strlen.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_strlcpy.c \

OBJS = $(SRCS:.c=.o)

TESTS = \

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

bonus:

tests: clean
	cc -lbsd -g $(CFLAGS) main.c $(NAME)

.PHONY: all clean fclean re tests

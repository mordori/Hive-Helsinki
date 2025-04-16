CC = cc

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

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS)
	@echo "removing objects"

fclean: clean
	@rm -rf $(NAME)
	@echo "removing library"

re: fclean all

test:
	$(CC) -lbsd -g $(CFLAGS) main.c $(NAME)
	valgrind --leak-check=full --track-origins=yes ./a.out

.PHONY: all clean fclean re test

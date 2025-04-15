CC = cc

CFLAGS = -Wall -Wextra -Werror

INC = includes

SRCS = ft_strlen.c \

OBJS = $(SRCS:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INC)

clean:
	@rm -rf $(OBJS)
	@echo "removing objects"

fclean: clean
	@rm -rf $(NAME)
	@echo "removing executable"

re: fclean all

.PHONY: all clean fclean re

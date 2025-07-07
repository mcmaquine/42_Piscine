#to compile use gcc -static <program_name>.c libft.a

NAME = libft.a

SRC = ft_putstr.c ft_putchar.c ft_strcmp.c ft_strlen.c ft_swap.c

SRCS = $(addprefix $(PRE), $(SRC))

OBJS = $(SRC:.c=.o)

PRE = ./srcs/

INC = ./includes/

WFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(OBJS): $(SRCS)
	   gcc $(WFLAGS) $(SRCS) -c -I $(INC)

$(NAME): $(OBJS)
	ar -rc $@ $(OBJS)
	ranlib $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

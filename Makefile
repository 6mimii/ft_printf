SRC = ft_printf.c \
ft_putstr.c \
ft_to_hexadecimal.c \
ft_putchar.c \
ft_putnbr.c \
ft_putnbr_unsigned_int.c \
ft_to_upper.c \
ft_to_lower.c \

OBJ = $(SRC:%.c=%.o)

NAME = libftprintf.a

CC = gcc 

CFLAGS = -Wall -Wextra -Werror

RM =  rm -f 

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

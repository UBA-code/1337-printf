SRCS = srcs/ft_hex.c srcs/ft_putchar.c srcs/ft_putnbr.c srcs/ft_putnbr_unsigned.c srcs/ft_putstr.c srcs/ft_pointer.c ft_printf.c
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRCS_OBG = $(SRCS:.c=.o)
all: $(NAME)

$(NAME): $(SRCS_OBG)
	ar rc $(NAME) $(SRCS_OBG)

clean:
	rm -rf $(SRCS_OBG)

fclean: clean
	rm -rf $(NAME)

re: fclean all
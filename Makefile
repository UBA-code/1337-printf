SRCS = srcs/ft_put_hex.c srcs/ft_putchar.c srcs/ft_putnbr.c srcs/ft_putnbr_unsigned.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_tolower.c\
		flags/flag_arr.c flags/flag_char.c flags/flag_digit.c flags/flag_int.c flags/flag_num_hex.c flags/flag_num_hex_upp.c flags/flag_pointer.c flags/flag_unsigned.c\
		ft_printf.c check_flags.c srcs/ft_put_hex_pointer.c
SRCS_OBG = $(SRCS:.c=.o)
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(SRCS_OBG)
	ar rc $(NAME) $(SRCS_OBG)

clean:
	rm -f $(SRCS_OBG)
fclean: clean
	rm -f $(NAME)
re: fclean all
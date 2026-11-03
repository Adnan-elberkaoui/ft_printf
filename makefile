NAME	= libftprintf.a
CC		= cc
CFLAGS	= -Wall -Wextra -Werror

SRCS	= ft_printf.c \
		  ft_print_char.c \
		  ft_print_str.c \
		  ft_printf_num.c \
		  ft_puthex_base.c \
		  ft_print_hexa_lower.c \
		  ft_print_hexa_upper.c \
		  ft_printf_unsigned.c \
		  ft_printf_ptr.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
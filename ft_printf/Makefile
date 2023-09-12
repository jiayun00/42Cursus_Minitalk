NAME	= libftprintf.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
SRCS	= ft_print_chr ft_print_str ft_print_point ft_print_undec \
		  ft_print_dec ft_print_hexa ft_print_long_hexa ft_printf

CFILES	= $(SRCS:%=%.c)
OFILES	= $(SRCS:%=%.o)

RM		= rm -f

$(NAME)	:
	$(CC) $(CFLAGS) -c $(CFILES) -I./
	ar -rc $(NAME) $(OFILES)

all		: $(NAME)

clean	:
	$(RM) $(OFILES)

fclean	: clean
	$(RM) $(NAME)

re		: fclean all

.PHONY	: all clean fclean re


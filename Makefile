LIBFTPRINTF = ft_printf/libftprintf.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra

SERVER = server
CLIENT = client
SRC_SERVER = server.c
SRC_CLIENT = client.c

OBJ_SERVER = $(SRC_SERVER:.c=.o)
OBJ_CLIENT = $(SRC_CLIENT:.c=.o)

all: $(SERVER) $(CLIENT)

$(SERVER): $(OBJ_SERVER) $(LIBFTPRINTF)
		${CC} ${CFLAGS} ${OBJ_SERVER} ft_printf/libftprintf.a -o ${SERVER}

$(CLIENT): $(OBJ_CLIENT) $(LIBFTPRINTF)
		${CC} ${CFLAGS} ${OBJ_CLIENT} ft_printf/libftprintf.a -o ${CLIENT}

$(LIBFTPRINTF):
		${MAKE} -C ./ft_printf

clean:
		$(MAKE) clean -C ./ft_printf
		rm -rf ${OBJ_SERVER} ${OBJ_CLIENT}

fclean: clean
		$(MAKE) fclean -C ./ft_printf
		rm -rf $(SERVER) $(CLIENT)

re: fclean all

.PHONY: all clean fclean re

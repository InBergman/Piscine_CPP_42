NAME = carnet

# SRC_PATH = src/

SRC = 	main.c\
		
OBJ = $(SRC:.c=.o)

INCLUDE = include/main.h

# LIBFT = libft/libft.h

# LIB = lib/libftprintf.a

CFLAGS = -Wall -Wextra -Werror -I .

CC = g++

.PHONY: all lib clean fclean re
# .SILENT:

all: $(NAME)

$(NAME): lib $(OBJ)
	@$(CC) -o $(NAME) $(LIB) $(OBJ) -L

lib:
	@make -C

clean:
	@make clean -C
	@/bin/rm -f $(OBJ)

fclean: clean
	@make fclean -C
	@/bin/rm -f $(NAME)

re: fclean all

NAME = carnet

SRC = 	main.cpp contact.class.cpp

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

CC = G++

all: $(OBJ)
		$(CC) $(FLAGS) $(OBJ)

%.o: %.cpp
	$(CC) -o $@ -c $< $(FLAGS)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

NAME	= bureaucrat

CC		= c++
CFLAGS	= -Werror -Wextra -Wall -g -std=c++98

SRC		= main.cpp \
		  Bureaucrat.cpp

OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
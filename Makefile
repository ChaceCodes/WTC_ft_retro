COMP = clang++

COMPFLAGS = -Wall -Werror -Wextra

NAME = ft_retro

SRC = 

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(COMP) $(COMPFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(COMP) $(COMPFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
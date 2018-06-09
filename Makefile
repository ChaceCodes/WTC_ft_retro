COMP = clang++

COMPFLAGS = #-Wall -Werror -Wextra

NAME = ft_retro

SRC =	Arena.cpp\
		Enemy.cpp\
		GameObject.cpp\
		Missile.cpp\
		Player.cpp\
		main.cpp

NFLAG = -lncurses

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(COMP) $(COMPFLAGS) $(NFLAG) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(COMP) $(COMPFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
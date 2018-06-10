COMP = clang++

COMPFLAGS = #-Wall -Werror -Wextra

NAME = ft_retro

SRC =	src/Arena.cpp\
		src/Enemy.cpp\
		src/GameObject.cpp\
		src/Missile.cpp\
		src/Player.cpp\
		src/main.cpp\
		src/ObjectManager.cpp

NFLAG = -lncurses

OBJ = $(SRC:src/.cpp=objs/.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(COMP) $(COMPFLAGS) $(NFLAG) -o $(NAME) $(OBJ) -I ./headers

%.o: %.cpp
	$(COMP) $(COMPFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
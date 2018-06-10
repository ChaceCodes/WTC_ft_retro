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

all: $(NAME)

$(NAME):
	$(COMP) $(COMPFLAGS) $(SRC) $(NFLAG) -o $(NAME) -I ./headers

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all
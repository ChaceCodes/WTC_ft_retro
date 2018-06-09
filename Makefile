COMP = clang++

COMPFLAGS = -Wall -Werror -Wextra

NAME = ft_retro

SRC = SRC/ft_retro.cpp

NFLAG = -lncurses

all: $(NAME)

$(NAME):
	$(COMP) $(COMPFLAGS) $(SRC) $(NFLAG) -o $(NAME)

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all
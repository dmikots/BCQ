NAME = bcq

SRCS = *.c

all:
	gcc -Wall -Wextra -Werror $(SRCS) -o ${NAME}

clean:
	/bin/rm -f *.o *test*

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

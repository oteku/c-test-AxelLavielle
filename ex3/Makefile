NAME	=	drawCube

SRC	=	cube.cpp

OBJ	=	$(SRC:.cpp=.o)

RM	=	rm -f

CC	=	g++

%.o: %.cpp
	$(CC) -c -o $@ $<

all	:	$(NAME)

$(NAME)	:	$(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean	:
		$(RM) $(OBJ)

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re

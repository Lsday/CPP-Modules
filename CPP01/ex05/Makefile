SRC = main.cpp Karen.cpp
CC = g++
FLAGS = -Wall -Werror -Wextra

OBJS = ${SRC:.cpp=.o}

NAME = Karen

all : ${OBJS}
		${CC} ${FLAGS} ${OBJS} -o ${NAME}

clean : 
	rm -rf ${OBJS}

fclean : clean
	rm ${NAME}

re : fclean all
SRC = main.cpp
CC = g++
FLAGS = -Wall -Werror -Wextra

OBJS = ${SRC:.cpp=.o}

NAME = replace

all : ${OBJS}
		${CC} ${FLAGS} ${OBJS} -o ${NAME}

clean : 
	rm -rf ${OBJS}

fclean : clean
	rm ${NAME}

re : fclean all
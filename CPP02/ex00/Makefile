SRC = main.cpp Fixed.cpp
CC = g++
FLAGS = -Wall -Werror -Wextra
NAME = fixed
OBJS = ${SRC:.cpp=.o}

${NAME} : ${OBJS}
	${CC} ${FLAGS} ${OBJS} -o ${NAME}

clean :
	rm -rf ${OBJS}

fclean : clean
	rm ${NAME}

re : fclean ${NAME}


SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
CC = g++
FLAGS = -Wall -Werror -Wextra std-fsanitize=address
NAME = test
OBJS = ${SRC:.cpp=.o}

${NAME} : ${OBJS}
	${CC} ${FLAGS} ${OBJS} -o ${NAME}

clean :
	rm -rf ${OBJS}

fclean : clean
	rm ${NAME}

re : fclean ${NAME}


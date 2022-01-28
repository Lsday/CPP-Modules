SRC = megaphone.cpp
CC = g++
FLAGS = -Wall -Werror -Wextra

OBJS = ${SRC:.cpp=.o}

NAME = megaphone

${NAME} : ${OBJS}
		${CC} ${FLAGS} ${OBJS} -o ${NAME}

clean : 
	rm -rf ${OBJS}

fclean : clean
	rm ${NAME}

re : fclean all
SRC = main.cpp Zombie.cpp ZombieHorde.cpp
CC = g++
FLAGS = -Wall -Werror -Wextra

OBJS = ${SRC:.cpp=.o}

NAME = ex01

all : ${OBJS}
		${CC} ${FLAGS} ${OBJS} -o ${NAME}

clean : 
	rm -rf ${OBJS}

fclean : clean
	rm ${NAME}

re : fclean all
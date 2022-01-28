SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
CC = g++
FLAGS = -Wall -Werror -Wextra
NAME = fragTrap
OBJS = ${SRC:.cpp=.o}

${NAME} : ${OBJS}
	${CC} ${FLAGS} ${OBJS} -o ${NAME}

clean :
	rm -rf ${OBJS}

fclean : clean
	rm ${NAME}

re : fclean ${NAME}


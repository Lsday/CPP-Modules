SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
CC = g++
FLAGS = -Wall -Werror -Wextra -Wshadow -Wno-shadow
NAME = weird
OBJS = ${SRC:.cpp=.o}

${NAME} : ${OBJS}
	${CC} ${FLAGS} ${OBJS} -o ${NAME}

clean :
	rm -rf ${OBJS}

fclean : clean
	rm ${NAME}

re : fclean ${NAME}


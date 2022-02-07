SRC = main.cpp
CC = clang++
CFLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address
NAME = easy
OBJS = ${SRC:.cpp=.o}

${NAME} : ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

%.o:%.cpp
	$(CC) $(CFLAGS) -c $< -o $@
clean :
	rm -rf ${OBJS}

fclean : clean
	rm ${NAME}

re : fclean ${NAME}
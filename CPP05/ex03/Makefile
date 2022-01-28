SRC = main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp
CC = clang++
CFLAGS = -Wall -Werror -Wextra -std=c++98
NAME = Bureaucrat
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
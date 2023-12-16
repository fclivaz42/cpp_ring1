SRCS	= MyPhoneBook.cpp

OBJS	= ${SRCS:.cpp=.o}

CFLAGS	= -Wall -Werror -Wextra -O2 -std=c++98

CC	= c++

NAME	= phonebook

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

${NAME}:	${OBJS}
		${CC} -o ${NAME} ${OBJS}

all:	${NAME}

debug:
	${CC} -o ${NAME} ${SRCS} -g3 -fsanitize=address

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re:	fclean all

.PHONY: all fclean clean re

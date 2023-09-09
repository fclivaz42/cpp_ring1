SRCS	= megaphone.cpp

OBJS	= ${SRCS:.cpp=.o}

CFLAGS	= -Wall -Werror -Wextra -O2 -std=c++98

CC	= c++

NAME	= megaphone

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

${NAME}:	${OBJS}
		${CC} -o ${NAME} ${OBJS}

all:	${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re:	fclean all

.PHONY: all fclean clean re

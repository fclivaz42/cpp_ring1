SRCS	= MyPhoneBook.cpp ClassPhoneBook.cpp ClassContact.cpp

OBJS	= ${SRCS:.cpp=.o}

CFLAGS	= -Wall -Werror -Wextra -O2 -std=c++98

LFLAGS = -I${INCL}

CC	= c++

NAME	= phonebook

INCL	= ClassContact.hpp ClassPhoneBook.hpp MyPhoneBook.hpp

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o} ${LFLAGS}

${NAME}:	${OBJS}
		${CC} -o ${NAME} ${OBJS}  ${LFLAGS}

all:	${NAME}

debug:
	${CC} -o ${NAME} ${SRCS} -g3 -fsanitize=address

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re:	fclean all

.PHONY: all fclean clean re

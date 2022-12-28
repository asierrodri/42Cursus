SRC			= main.c ft_print_map.c ft_open_read.c ft_arg_errors.c 

SRCS		= ${addprefix ${PRE}, ${SRC}}

OBJS		= ${SRCS:.c=.o}

PRE			= ./srcs/

HEAD		= ./headers/

MAPS		= ./maps/

NAME		= bsq

RM			= rm -f

GCC			= gcc

CFLAGS		= -Wall -Wextra -Werror

all:		${NAME}

.c.o:
			${GCC} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${GCC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re

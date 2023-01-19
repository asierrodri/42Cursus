# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 17:20:57 by asirodri          #+#    #+#              #
#    Updated: 2023/01/19 16:59:52 by asirodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a
CFLAGS		=	-Wextra -Wall -Werror
AR			=	ar
ARFLAGS		=	rc
LIB			=	ft_putchar.c			\
				ft_putint.c				\
				ft_putstr.c				\
				ft_printf.c				\
				ft_puthexa.c			\
				ft_putint_unsigned.c	\
				ft_txus.c				\
#	Objects
OBJS		= $(LIB:%.c=%.o)

#	First target
all:	$(NAME)

#	Compiler
CC	= gcc
RM	= @/bin/rm -f
%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)
$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	ranlib $(NAME)

#	Removing objects
clean:
			@echo ${B}Cleaning ${X}${R}${OBJS}${X}
			$(RM) $(OBJS)

#	Removing objects and exe
fclean:		clean
			@echo ${B}Cleaning ${X}${R}${NAME}${X}
			$(RM) $(NAME)

#	All removing then compiling
re:			fclean all

.PHONY:		all clean fclean re
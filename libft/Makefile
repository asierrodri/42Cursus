# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 10:23:54 by eochoa-d          #+#    #+#              #
#    Updated: 2022/12/07 20:21:35 by asirodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
CFLAGS		=	-Wextra -Wall -Werror
AR			=	ar
ARFLAGS		=	rc
LIB			=	ft_isalpha.c	\
				ft_isdigit.c	\
				ft_isalnum.c	\
				ft_isascii.c	\
				ft_isprint.c	\
				ft_strlen.c		\
				ft_memset.c		\
				ft_bzero.c		\
				ft_memcpy.c		\
				ft_memmove.c	\
				ft_strlcpy.c	\
				ft_strlcat.c	\
				ft_toupper.c	\
				ft_tolower.c	\
				ft_strchr.c		\
				ft_strrchr.c	\
				ft_strncmp.c	\
				ft_memchr.c		\
				ft_memcmp.c		\
				ft_strnstr.c	\
				ft_atoi.c		\
				ft_calloc.c		\
				ft_strdup.c		\
				ft_substr.c		\
				ft_strjoin.c	\
				ft_strtrim.c	\


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
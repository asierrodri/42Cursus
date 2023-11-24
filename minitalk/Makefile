# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/17 20:17:10 by asirodri          #+#    #+#              #
#    Updated: 2023/11/17 20:17:22 by asirodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 		= gcc
CFLAGS 	= -Wall -Wextra -Werror

SRC 	= server.c client.c
OBJS 	= $(SRC:.c=.o)


Y = "\033[33m"
R = "\033[31m"
G = "\033[32m"
B = "\033[34m"
X = "\033[0m"
UP = "\033[A"
CUT = "\033[K"


all: libft server client

server: server.o libft
	@echo $(Y)Compiling [server.c]...$(X)
	@echo $(G)Finished [server]$(X)
	@$(CC) -o $@ $< -Llibft -lft


client: client.o libft
	@echo $(Y)Compiling [client.c]...$(X)
	@echo $(G)Finished [client]$(X)
	@$(CC) -o $@ $< -Llibft -lft


%.o: %.c
	@$(CC) -c $(CFLAGS) $?

libft:
	@make -C libft

clean:
	@make -C libft clean
	@rm -f $(OBJS)
	@echo $(R)Removed [$(OBJS)]$(X)	
	
fclean: clean
	@rm -f server client libft/libft.a
	@echo $(R)Removed [server client libft/libft.a]$(X)

re: fclean all

.PHONY: all bonus libft clean fclean re
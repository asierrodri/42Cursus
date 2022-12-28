# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: itrueba- <itrueba-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/30 20:25:38 by ide-la-i          #+#    #+#              #
#    Updated: 2022/10/30 22:59:18 by itrueba-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CFLAGS=-Werror -Wall -Wextra
rush-02: main.c ft_dictionary_upload.c ft_number.c segment.c union.c
	$(CC) $(CFLAGS) -o rush-02 main.c ft_dictionary_upload.c ft_number.c segment.c union.c
.PHONY: fclean
fclean:
	find . ! \( -name 'Makefile' -o -name 'ft_dictionary_upload.c' -o -name 'ft_number.c' -o -name 'numbers.dict.txt' -o -name 'lib.h' -o -name 'main.c' -o -name segment.c \) -type f -exec rm -f {} +
.PHONY: clean
clean:
	find . ! \( -name 'Makefile' -o -name 'ft_dictionary_upload.c' -o -name 'ft_number.c' -o -name 'numbers.dict.txt' -o -name 'lib.h' -o -name 'main.c' -o -name segment.c \) -type f -exec rm -f {} +
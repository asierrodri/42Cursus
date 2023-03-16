# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/14 19:14:23 by asirodri          #+#    #+#              #
#    Updated: 2023/03/16 19:42:01 by asirodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  =  so_long
CC 	  =  gcc -fsanitize=address -g3
OBJ   =  so_long.c
GAME  =  game/ft_get_images.c 			\
		 game/ft_print_game.c			\
		 game/ft_start_game.c			\
		 game/ft_movement.c				\

ERROS  = errors/ft_check_ber.c 			\
		 errors/ft_check_parameters.c 	\
		 errors/ft_check_errors.c 		\
		 errors/ft_flood_fill.c			\
		 errors/ft_check_rectangle.c	\
		 errors/ft_check_limits.c		\

UTILS  = utils/ft_memcpy.c 				\
		 utils/ft_read.c 				\
		 utils/ft_split.c 				\
		 utils/ft_strdup.c				\
		 utils/ft_strjoin.c				\
		 utils/ft_strlen.c				\
		 utils/ft_substr.c				\
		 utils/ft_itoa.c				\
		
MLX		= minilibx/libmlx.a

CFLAGS 	= -Wall -Wextra -Werror

$(NAME): $(OBJ) $(ERROS) $(UTILS) $(GAME)
	$(CC) $(OBJ) $(ERROS) $(UTILS) $(GAME) $(MLX) -framework OpenGL -framework AppKit -o $(NAME)

clean:
			$(RM) $(OBJS)
			@echo "Objects removed"

fclean:		clean
			$(RM) $(NAME)
			@echo "Library removed"

re:			fclean all

.PHONY:		all clean fclean re
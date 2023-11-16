# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/14 19:14:23 by asirodri          #+#    #+#              #
#    Updated: 2023/11/16 17:46:34 by asirodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  =  so_long

CC      =  gcc
CFLAGS  = -Wall -Wextra -Werror -fsanitize=address -g3

GAME  =  so_long.c 						\
		 game/ft_get_images.c 			\
		 game/ft_print_game.c			\
		 game/ft_start_game.c			\
		 game/ft_movement.c				\
		 game/ft_move_enemy.c			\
		 game/ft_enemy_pos.c			\
		 

ERRORS  = errors/ft_check_ber.c 		\
		 errors/ft_check_parameters.c 	\
		 errors/ft_check_errors.c 		\
		 errors/ft_flood_fill.c			\
		 errors/ft_check_rectangle.c	\
		 errors/ft_check_limits.c		\
		 errors/ft_check_collectible.c	\
		 errors/ft_new_line.c			\


UTILS  = utils/ft_memcpy.c 				\
		 utils/ft_read.c 				\
		 utils/ft_split.c 				\
		 utils/ft_strdup.c				\
		 utils/ft_strjoin.c				\
		 utils/ft_strlen.c				\
		 utils/ft_substr.c				\
		 utils/ft_itoa.c				\
		
MLX     = minilibx
LMLX    = -framework OpenGL -framework AppKit

RM      = rm -rf

Y = "\033[33m"
R = "\033[31m"
G = "\033[32m"
B = "\033[34m"
X = "\033[0m"
UP = "\033[A"
CUT = "\033[K"

OBJS    = $(GAME:.c=.o) $(ERRORS:.c=.o) $(UTILS:.c=.o)

all:        $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -c -o $@ $<
	@printf $(UP)$(CUT)
	@echo $(Y)Compiling [$<]...$(X)

$(NAME): $(OBJS)
	@printf $(UP)$(CUT)
	@echo $(Y)Compiling [$(NAME)]...$(X)
	@echo $(G)Finished [$(NAME)]$(X)
	make  -C $(MLX)
	@$(CC) $(CFLAGS) $(LMLX) $(MLX)/libmlx.a -o $@ $^

clean:
	@make -C $(MLX) clean
	@$(RM) $(OBJS)
	@echo $(R)Removed [$(OBJS)]$(X)

fclean:
	@make -C $(MLX) fclean
	@$(RM) $(OBJS)
	@$(RM) $(NAME)
	@echo $(R)Removed [$(OBJS)]$(X)
	@echo $(R)Removed [$(NAME)]$(X)

re:         fclean all

.PHONY:     all clean fclean re
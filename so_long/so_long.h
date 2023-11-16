/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:45:05 by asirodri          #+#    #+#             */
/*   Updated: 2023/11/16 17:46:46 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# include "minilibx/mlx.h"

typedef struct s_enemy
{
	unsigned int	x;
	unsigned int	y;
}	t_enemy;

typedef struct s_imgs
{
	void	*mlx;
	void	*window;
	void	*b;
	void	*p;
	void	*c;
	void	*e;
	void	*w;
	void	*x;
}	t_imgs;

typedef struct s_game
{
	char				**map;
	char				**map2;
	char				*file;
	unsigned int		y;
	unsigned int		x;
	int					player;
	int					enemy;
	int					exit;
	int					beginx;
	int					beginy;
	int					collectible;
	int					move;
	int					*flag;
	t_imgs				imgs;
	t_enemy				*enemys;
}	t_game;

//utils
char			**ft_split(char const *s, char c, t_game *game);
char			*ft_read(char *buffer, int fd, char *str);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strdup(const char *s);
unsigned int	ft_strlen(const char *str);
void			*ft_memcpy(void *dst, const void *src, size_t n);
char			*ft_itoa(int n);

//errors
int				ft_check_errors(t_game *game);
int				ft_check_rectangle(t_game *game);
int				ft_check_ber(t_game *game);
int				ft_check_limits(t_game *game);
int				ft_check_parameters(t_game *game);
void			ft_save_player(t_game *game);
void			ft_save_enemy(t_game *game);
int				ft_flood_fill(t_game *game);
int				ft_check_collectible(t_game *game);
int				ft_new_line(char *line);

//movements
void			ft_move_up(t_game *game);
void			ft_move_down(t_game *game);
void			ft_move_right(t_game *game);
void			ft_move_left(t_game *game);
int				ft_key(int keycode, t_game *game);
int				ft_loops(t_game *game);

//game
void			ft_get_images(t_game *game);
void			ft_print_game(t_game *game);
void			ft_start_game(t_game *game);
void			ft_mlx_xpm_file_to_img(void	**ptr, char *dir, t_game *game);
void			ft_enemy_pos(t_game *game, t_enemy *enemy);
void			ft_free(char **map, t_game *game);
int				ft_close(t_game *game);

//core
int				ft_open_map(t_game *game);
int				so_long(t_game *game);

#endif
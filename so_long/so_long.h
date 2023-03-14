/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:45:05 by asirodri          #+#    #+#             */
/*   Updated: 2023/03/14 19:17:13 by asirodri         ###   ########.fr       */
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
	char	**map;
	char	**map2;
	char	*file;
	int		y;
	int		x;
	int		player;
	int		enemy;
	int		exit;
	int		beginx;
	int		beginy;
	int		collectible;
	t_imgs	imgs;
}	t_game;

//utils
char	**ft_split(char const *s, char c, t_game *game);
char	*ft_read(char *buffer, int fd, char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *str);
void	*ft_memcpy(void *dst, const void *src, size_t n);

//errors
int		ft_check_errors(t_game *game);
int		ft_check_rectangle(t_game *game);
int		ft_check_ber(t_game *game);
int		ft_check_limits(t_game *game);
int		ft_check_parameters(t_game *game);
void	ft_save_parameters(t_game *game);
int		ft_flood_fill(t_game *game);

//game
void	ft_get_images(t_game *game);
void	ft_print_game(t_game *game);
void	ft_start_game(t_game *game);

//core
int		ft_open_map(t_game *game);
int		so_long(t_game *game, char *file);

#endif
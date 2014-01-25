/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/24 16:28:54 by abrault           #+#    #+#             */
/*   Updated: 2014/01/25 19:04:44 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <filler.h>
#include <libft.h>
#include <stdio.h>

void	get_dim_map(t_map *map)
{
	char	*line;
	char	*dim;

	line = NULL;
	get_next_line(0, &line);
	dim = ft_strtok(line, ':');
	ft_strtok(dim, ' ');
	map->height = ft_atoi(ft_strtok(NULL, ' '));
	map->width = ft_atoi(ft_strtok(NULL, ' '));
	get_next_line(0, &line);
	free(line);
	free(dim);
}

void	get_player(t_map *map)
{
	char	*line;
	char	*tok;
	int		i;

	line = NULL;
	tok = NULL;
	get_next_line(0, &line);
	tok = ft_strtok(line, ' ');
	i = 1;
	while (tok)
	{
		if (i == 3)
			map->letter = tok[1];
		tok = ft_strtok(NULL, ' ');
		i++;
	}
	free(line);
}

void	display_pos(int y, int x)
{
	printf("%d %d\n", y, x);
}

void	get_map(t_map *map)
{
	char	*line;
	int		i;

	i = -1;
	map->map = (char **)malloc(sizeof(char*) * map->height);
	line = NULL;
	i = 0;
	while (i < map->height && get_next_line(0, &line))
	{
		line = ft_strchr(line, ' ');
		map->map[i] = (char *)malloc(sizeof(char) * ft_strlen(ft_strchr(line,
						' ')));
		ft_strcpy(map->map[i], ft_strchr(line, ' '));
		i++;
	}
}

void	get_dim_piece(t_piece *piece)
{
	char	*line;
	char	*dim;

	(void)piece;
	line = NULL;
	dim = NULL;
	get_next_line(0, &line);
	dim = ft_strtok(line, ':');
	ft_strtok(dim, ' ');
	piece->height = ft_atoi(ft_strtok(NULL, ' '));
	piece->width = ft_atoi(ft_strtok(NULL, ' '));
	free(dim);
	free(line);
}

void	get_piece(t_piece *piece)
{
	char	*line;
	int		i;

	i = -1;
	piece->piece = (char **)malloc(sizeof(char*) * piece->height);
	line = NULL;
	i = 0;
	while (i < piece->height && get_next_line(0, &line))
	{
		piece->piece[i] = (char *)malloc(sizeof(char) *
				ft_strlen(line));
		ft_strcpy(piece->piece[i], line);
		i++;
	}
}

void	free_all(t_map *map, t_piece *piece)
{
	free(map->map);
	free(piece->piece);
}

int		main(void)
{
	char	*line;
	t_map	map;
	t_piece	piece;
	int		y;
	int		x;

	(void)piece;
	x = 1;
	y = 1;
	line = NULL;
	get_player(&map); //	OK
	while (42)
	{
		get_dim_map(&map); //	OK
		get_map(&map); //		Ok
		get_dim_piece(&piece);//OK
		get_piece(&piece);
		display_pos(map.height, map.width);
		free_all(&map, &piece);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/26 10:57:47 by abrault           #+#    #+#             */
/*   Updated: 2014/01/26 11:01:46 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <filler.h>
#include <stdlib.h>
#include <libft.h>

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

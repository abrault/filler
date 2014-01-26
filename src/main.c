/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/24 16:28:54 by abrault           #+#    #+#             */
/*   Updated: 2014/01/26 11:53:53 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <filler.h>
#include <libft.h>
#include <stdio.h>

void	display_pos(int y, int x)
{
	printf("%d %d\n", y, x);
}

void	free_all(t_map *map, t_piece *piece)
{
	free(map->map);
	free(piece->piece);
}

int		main(void)
{
	int		y;
	int		x;
	char	*line;
	t_map	map;
	t_piece	piece;

	x = 1;
	y = 1;
	line = NULL;
	get_player(&map);
	(void)piece;
	while (42)
	{
		//get_dim_map(&map);

		while (get_next_line(0, &line) == 1)
		{
			write(2, line, ft_strlen(line));
			write(2, "\n", 1);
		}
		/*
		get_map(&map);
		get_dim_piece(&piece);
		get_piece(&piece);
		*/
		display_pos(1, 1);
		//free_all(&map, &piece);
	}
	return (0);
}

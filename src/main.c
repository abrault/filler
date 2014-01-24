/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/24 16:28:54 by abrault           #+#    #+#             */
/*   Updated: 2014/01/24 17:25:55 by abrault          ###   ########.fr       */
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

	line = NULL;
	get_next_line(1, &line);
	(void)map;
	write(1, "Recu :", 6);
	write(2, line, ft_strlen(line));
}

int		main(void)
{
	char	*line;
	t_map	map;

	line = NULL;
	(void)map;
	while (42)
	{
		get_next_line(0, &line);
		write(1, "1 1\n", 4);
	}
	return (0);
}

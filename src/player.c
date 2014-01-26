/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/26 11:08:52 by abrault           #+#    #+#             */
/*   Updated: 2014/01/26 11:09:46 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>
#include <filler.h>

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

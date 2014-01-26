/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piece.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/26 11:02:14 by abrault           #+#    #+#             */
/*   Updated: 2014/01/26 11:05:25 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>
#include <filler.h>

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


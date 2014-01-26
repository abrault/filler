/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/24 16:32:09 by abrault           #+#    #+#             */
/*   Updated: 2014/01/26 11:21:00 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

typedef struct s_map	t_map;
typedef struct s_piece	t_piece;

struct					s_piece
{
	int					width;
	int					height;
	char				**piece;
};

struct					s_map
{
	int					width;
	int					height;
	char				letter;
	char				**map;
};

void					get_dim_map(t_map *map);
void					get_map(t_map *map);
void					get_dim_piece(t_piece *piece);
void					get_piece(t_piece *piece);
void					get_player(t_map *map);

#endif

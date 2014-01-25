/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/24 16:32:09 by abrault           #+#    #+#             */
/*   Updated: 2014/01/25 17:10:33 by abrault          ###   ########.fr       */
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

#endif

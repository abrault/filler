/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/24 16:32:09 by abrault           #+#    #+#             */
/*   Updated: 2014/01/24 17:25:57 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

typedef struct s_map	t_map;

struct					s_map
{
	int					width;
	int					height;
	char				letter;
	char				**map;
};

#endif

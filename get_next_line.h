/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etugoluk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 15:21:05 by etugoluk          #+#    #+#             */
/*   Updated: 2018/02/01 15:21:07 by etugoluk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft/libft.h"
# define BUFF_SIZE 32

typedef struct		s_lines
{
	int				fd;
	char			*buf;
	struct s_lines	*next;
}					t_lines;

int					get_next_line(const int fd, char **line);

#endif

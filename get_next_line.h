/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphuntso <dphuntso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 16:47:48 by dphuntso          #+#    #+#             */
/*   Updated: 2018/03/27 15:03:49 by dphuntso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 32

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include "libft/libft.h"

typedef	struct			s_file
{
	int					fd;
	int					len;
	char				*str;
	struct s_file		*next;
}						t_file;

int						get_next_line(const int fd, char **line);

#endif

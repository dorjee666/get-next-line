/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphuntso <dphuntso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 16:46:20 by dphuntso          #+#    #+#             */
/*   Updated: 2018/03/27 15:03:35 by dphuntso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		check(char **line, t_file *file)
{
	int i;

	i = 0;
	while ((*line)[i])
	{
		if ((*line)[i] == '\n' || (*line)[i] == '\r')
		{
			(*line)[i++] = '\0';
			(file->len) = (int)ft_strlen(&((*line)[i]));
			if ((file->str = malloc((BUFF_SIZE) * sizeof(char) + 1)) == NULL)
				return (-1);
			file->str = ft_strcpy(file->str, &((*line)[i]));
			return (1);
		}
		i++;
	}
	return (-1);
}

char	*get_line(t_file *file, int *ptr)
{
	char	*str;

	if (file->str == NULL)
	{
		str = malloc(BUFF_SIZE * sizeof(char) + 1);
		str[0] = '\0';
		*ptr = 0;
		return (str);
	}
	*ptr = (int)ft_strlen(file->str);
	if ((str = malloc((*ptr + BUFF_SIZE) * sizeof(char) + 1)) == NULL)
		return (NULL);
	str = ft_strcpy(str, file->str);
	if (file->str != NULL)
		ft_memdel((void **)&(file->str));
	return (str);
}

t_file	*init_file(t_file **file, int fd)
{
	t_file *temp;
	t_file *f;

	f = *file;
	temp = malloc(sizeof(t_file));
	temp->len = 0;
	temp->str = NULL;
	temp->next = NULL;
	while (f != NULL)
	{
		if (f->fd == fd)
		{
			ft_memdel((void **)&temp);
			return (f);
		}
		if (f->next == NULL)
		{
			f->next = temp;
			break ;
		}
		f = f->next;
	}
	if (*file == NULL)
		*file = temp;
	return (temp);
}

int		read_file(char **line, int len, int fd, t_file **file)
{
	int		ret;
	char	*str;

	if (check(line, *file) == 1)
		return (1);
	while ((ret = read(fd, *line + len, BUFF_SIZE)) > 0)
	{
		len += (ret);
		(*line)[len] = '\0';
		if (check(line, *file) == 1)
			return (1);
		if ((ret) == BUFF_SIZE)
		{
			str = malloc((len + BUFF_SIZE) * sizeof(char) + 1);
			str = ft_strcpy(str, *line);
			if (*line != NULL)
				ft_memdel((void **)&(*line));
			(*line) = str;
		}
	}
	if ((ret) == -1)
		return (-1);
	if ((ret) == 0 && (*line)[0] == '\0')
		return (0);
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	int				ret;
	int				len;
	t_file			*file;
	static t_file	*file_list = NULL;

	if (fd < 0 || line == NULL)
		return (-1);
	if (read(fd, *line, 0) == (-1))
		return (-1);
	file = init_file(&file_list, fd);
	file->fd = fd;
	if ((*line = get_line(file, &len)) == NULL)
		return (-1);
	ret = read_file(line, len, fd, &file);
	return (ret);
}

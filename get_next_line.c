/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 10:18:02 by cmatshiy          #+#    #+#             */
/*   Updated: 2018/06/29 15:20:06 by cmatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		endline(char *buff)
{
	int	cb;

	cb = 0;
	while (buff[cb] != ENDL && buff[cb])
		cb++;
	if (buff[cb] == ENDL)
	{
		buff[cb] = END;
		return (cb);
	}
	else
		return (-1);
}

static char		*join(char *buff, char *tab)
{
	size_t		a;
	size_t		b;
	char		*ptr;

	a = 0;
	b = 0;
	if (buff)
		a = ft_strlen(buff);
	if (tab)
		b = ft_strlen(tab);
	ptr = (char *)malloc(sizeof(*ptr) * (a + b + 1));
	ft_memcpy(ptr, buff, a);
	ft_memcpy(ptr + a, tab, b);
	ptr[a + b] = '\0';
	free(buff);
	ft_bzero(tab, BUFF_SIZE + 1);
	return (ptr);
}

static int		verif(char **buff, char **tab, char **line)
{
	char		*ptr;
	int			final;

	*buff = join(*buff, *tab);
	final = endline(*buff);
	if (final > -1)
	{
		*line = ft_strdup(*buff);
		ptr = *buff;
		*buff = ft_strdup(*buff + final + 1);
		free(ptr);
		return (1);
	}
	return (0);
}

int				get_next_line(int const fd, char **line)
{
	static char	*buff[10000];
	char		*heap;
	int			result;
	int			index;

	heap = ft_strnew(BUFF_SIZE);
	if (!line || BUFF_SIZE <= 0 || fd < 0 || (index = read(fd, heap, 0)) < 0)
		return (-1);
	while ((index = read(fd, heap, BUFF_SIZE)) > 0)
	{
		result = verif(&buff[fd], &heap, line);
		free(heap);
		if (result == 1)
			return (1);
		heap = ft_strnew(BUFF_SIZE);
	}
	if ((result = verif(&buff[fd], &heap, line)))
		return (1);
	else if (ft_strlen(buff[fd]) > 0)
	{
		*line = ft_strdup(buff[fd]);
		ft_strdel(&buff[fd]);
		return (1);
	}
	return (result);
}

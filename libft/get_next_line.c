/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odde-mat <odde-mat@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 14:50:13 by odde-mat          #+#    #+#             */
/*   Updated: 2020/09/01 13:33:05 by odde-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#define BUFF_SIZE 1

static int		getsecond(char **line, char **s)
{
	int				len;
	char			*tmp;

	len = 0;
	while ((*s)[len] != '\n' && (*s)[len] != '\0')
		len++;
	if ((*s)[len] == '\n')
	{
		*line = ft_strsub(*s, 0, len);
		tmp = ft_strdup(*s + len + 1);
		free(*s);
		*s = tmp;
		if (*s[0] == '\0')
			ft_strdel(s);
	}
	else
	{
		*line = ft_strdup(*s);
		ft_strdel(s);
	}
	return (1);
}

static int		ft_return(char **s, int ret, char **line)
{
	if (ret < 0)
		return (-1);
	else if (ret == 0 && (*s) == NULL)
		return (0);
	else
		return (getsecond(line, s));
}

int				get_next_line(const int fd, char **line)
{
	int				ret;
	char			buf[BUFF_SIZE + 1];
	char			*tmp;
	static char		*s[4096];

	if (fd < 0 || line == NULL)
		return (-1);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (s[fd] == NULL)
			s[fd] = ft_strdup(buf);
		else
		{
			tmp = ft_strjoin(s[fd], buf);
			free(s[fd]);
			s[fd] = tmp;
		}
		if (ft_strchr(buf, '\n'))
			break ;
	}
	return (ft_return(&s[fd], ret, line));
}

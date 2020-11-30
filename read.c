/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odde-mat <odde-mat@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 10:23:51 by odde-mat          #+#    #+#             */
/*   Updated: 2020/10/14 16:11:31 by odde-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FdF.h"
#include <stdio.h>

int		ft_read_file(char *file)
{
	char	*line;
	int		fd;
	char	**save_array;
	int		i;
	int		len;

	line = NULL;
	i = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (-1);
	if (!(save_array = (char**)malloc(sizeof(char*) * 500)))
		return (NULL);
	while (get_next_line(fd, &line) > 0)
		{
			len = ft_strlen(line);
			if (!(save_array[i] = (char*)malloc(sizeof(len) + 1)))
				return (NULL);
			ft_putstrendl(line);
			free(line);
			line = NULL;
			i++;
		}
	printf("amount of lines: %i\n", i);
	return (0);
}	
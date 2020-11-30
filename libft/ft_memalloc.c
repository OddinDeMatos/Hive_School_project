/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odde-mat <odde-mat@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 13:10:32 by odde-mat          #+#    #+#             */
/*   Updated: 2020/07/24 10:38:52 by odde-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char	*ptr;
	size_t	i;

	if (!(ptr = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	i = -1;
	while (++i < size)
		*(ptr + i) = 0;
	return (ptr);
}

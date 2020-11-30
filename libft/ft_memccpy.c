/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odde-mat <odde-mat@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/11 14:16:51 by odde-mat          #+#    #+#             */
/*   Updated: 2020/07/24 10:38:59 by odde-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*srce;
	unsigned char	*dest;
	size_t			i;

	i = 0;
	srce = (unsigned char *)src;
	dest = (unsigned char *)dst;
	while (i < n)
	{
		dest[i] = srce[i];
		if (srce[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}

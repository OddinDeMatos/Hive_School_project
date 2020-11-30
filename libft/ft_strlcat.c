/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odde-mat <odde-mat@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/12 13:31:02 by odde-mat          #+#    #+#             */
/*   Updated: 2020/07/24 10:42:19 by odde-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t k;
	size_t x;
	size_t y;

	i = 0;
	x = ft_strlen(src);
	k = ft_strlen(dst);
	if (dstsize <= k)
		y = dstsize + x;
	else
		y = x + k;
	while (src[i] != '\0' && k + 1 < dstsize)
	{
		dst[k] = src[i];
		i++;
		k++;
	}
	dst[k] = '\0';
	return (y);
}

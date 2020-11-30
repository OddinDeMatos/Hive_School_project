/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odde-mat <odde-mat@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/10 11:16:17 by odde-mat          #+#    #+#             */
/*   Updated: 2020/07/24 10:39:17 by odde-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*src2;
	unsigned char	*dst2;
	size_t			count;

	count = 0;
	src2 = (unsigned char *)src;
	dst2 = (unsigned char *)dst;
	while (count < n)
	{
		dst2[count] = src2[count];
		count++;
	}
	return (dst);
}

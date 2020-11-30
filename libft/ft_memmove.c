/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odde-mat <odde-mat@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 14:42:02 by odde-mat          #+#    #+#             */
/*   Updated: 2020/07/24 10:39:37 by odde-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
		while (len--)
			*(unsigned char *)(dst + len) = *(unsigned char *)(src + len);
	return (dst);
}

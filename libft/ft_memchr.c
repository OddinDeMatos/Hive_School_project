/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odde-mat <odde-mat@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 13:50:53 by odde-mat          #+#    #+#             */
/*   Updated: 2020/07/24 10:39:05 by odde-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	chara;

	str = (unsigned char *)s;
	chara = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*str == chara)
			return (str);
		str++;
		i++;
	}
	return (NULL);
}

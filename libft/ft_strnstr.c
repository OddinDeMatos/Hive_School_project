/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odde-mat <odde-mat@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 11:07:06 by odde-mat          #+#    #+#             */
/*   Updated: 2020/07/24 10:43:07 by odde-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	unsigned int i;
	unsigned int k;

	i = 0;
	if (s2[i] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0' && (size_t)i < len)
	{
		if (s1[i] == s2[0])
		{
			k = 0;
			while (s1[i + k] == s2[k] &&
					s2[k] != '\0' && (size_t)(i + k) < len)
				k++;
			if (s2[k] == '\0')
				return ((char *)s1 + i);
		}
		i++;
	}
	return (NULL);
}

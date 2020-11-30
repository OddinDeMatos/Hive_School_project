/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odde-mat <odde-mat@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 15:57:48 by odde-mat          #+#    #+#             */
/*   Updated: 2020/07/24 10:43:28 by odde-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int		i;
	unsigned int		k;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		k = 0;
		while (haystack[i + k] == needle[k] && needle[k] != '\0')
			k++;
		if (needle[k] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}
